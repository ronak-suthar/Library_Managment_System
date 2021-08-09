#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"
#include"../headers/authentication.h"
#include"../headers/menu.h"
#include"../headers/transactions.h"

stock* find_book(int);
//void set_dates(struct tm*,struct tm*);
struct tm set_issue_day(void);
struct tm set_return_day(void);
bool exist_and_update(int,int,int);


int get_new_uid(void){
    stock* see_books = (stock*) malloc(sizeof(stock));
    FILE* stock_file = fopen("files/stock.dat","r");

    int new_uid = 0;

    while(fread(see_books,sizeof(stock),1,stock_file)==1){
        new_uid=see_books->book.book_uid;
    }
    
    fclose(stock_file);
    free(see_books);
    return new_uid+100;
}
void add(){//Add New to Stock/Record
    stock* new_book = (stock*) malloc(sizeof(stock));

    getchar();

    new_lines(1);padding(2);
    printf("Enter Title of book : ");
    scanf("%[^\n]",new_book->book.title);

    getchar();
    new_lines(1);padding(2);
    printf("Enter Author First Name : ");
    scanf("%s",new_book->book.author.first);

    getchar();
    new_lines(1);padding(2);
    printf("Enter Author Last Name : ");
    scanf("%s",new_book->book.author.last);

    // getchar();
    // new_lines(1);padding(2);
    // printf("Enter Books Unique ID : ");
    // scanf("%d",&new_book->book.book_uid);
    
    new_book->book.book_uid = get_new_uid();

    getchar();
    new_lines(1);padding(2);
    printf("Enter Book Quantity : ");
    scanf("%d",&new_book->qty);

    FILE* file_ptr = fopen("files/stock.dat","a");

    fwrite(new_book,sizeof(stock),1,file_ptr);

    fclose(file_ptr);
    free(new_book);

}

void issue(int id){//Issue Book to issuie
    user* issuie = find_user(id);//Checking if issuie in our records or not


    if(issuie==NULL){
        new_lines(1);padding(2);
        printf("User don't exists in system kindly add him\n");
        printf("Kindly ask him/her to register\n");
        getchar();
    }
    else{
        int book_uid;

        new_lines(1);padding(2);
        printf("Enter Book UID : ");

        scanf("%d",&book_uid);

        stock* book_details = find_book(book_uid);//Check if book in our stock

        if(book_details==NULL){
            new_lines(1);padding(2);
            printf("Books does'nt exists in records kindly add book to record first\n");
            getchar();
            return;
        }

        int book_id;
        new_lines(1);padding(2);
        printf("Kindly Enter Book's ID (NOT UID) : ");
        scanf("%d",&book_id);

        if((book_id>book_details->book.book_uid) && (book_id<=book_details->book.book_uid+book_details->qty)){
            if(exist_and_update(book_id,book_uid,id)){
                printf("Book has Been Issued\n");
            }
            else{//create a new record
                
                    issued* issuing = (issued*) malloc(sizeof(issued));

                    issuing->book_id = book_id;
                    issuing->book_uid = book_uid;
                    issuing->issuer_id = id;

                    //set_dates(&issuing->issue_date,&issuing->return_date);
                    issuing->issue_date = set_issue_day();
                    issuing->return_date = set_return_day();

                    new_lines(1);padding(2);
                    printf("Issue Date : %s\n",asctime(&issuing->issue_date));
                    new_lines(1);padding(2);
                    printf("Return Date : %s\n",asctime(&issuing->return_date));

                    FILE* issueed_file = fopen("files/issued.dat","a");

                    fwrite(issuing,sizeof(issued),1,issueed_file);
                    fclose(issueed_file);
            }
        }
        else{
            new_lines(1);padding(2);
            printf("Invalid Book ID kindly check !\n");
            //return;
        }

        new_lines(1);padding(2);
        printf("End of Issuing Program\n");
        getchar();
    }

    

}

bool exist_and_update(int id,int uid,int user_id){
    //if issue records exists then just update the data of new issues and set new dates
    FILE* issued_file = fopen("files/issued.dat","r");
    FILE* temp_file = fopen("files/temp.dat","w");
    issued book_details;
    bool book_exists = false;

    while(fread(&book_details,sizeof(issued),1,issued_file)==1){

        if(book_details.book_id==id && book_details.book_uid==uid){
            if(book_details.issuer_id!=-1){
                new_lines(1);padding(2);
                printf("As per records books already issued to %d\n",book_details.issuer_id);
                fclose(temp_file);
                fclose(issued_file);
                remove("files/temp.dat");
                //main();
                return false;
            }
            else{
                book_details.issuer_id=user_id;
                book_details.issue_date = set_issue_day();
                book_details.return_date = set_return_day();
                fwrite(&book_details,sizeof(issued),1,temp_file);
                book_exists=true;
            }
            new_lines(1);padding(2);
            printf("Issue Date : %s\n",asctime(&book_details.issue_date));
            new_lines(1);padding(2);
            printf("Return Date : %s\n",asctime(&book_details.return_date));
        }
        else{
            fwrite(&book_details,sizeof(issued),1,temp_file);
        }
    }

    fclose(temp_file);
    fclose(issued_file);

    remove("files/issued.dat");
    rename("files/temp.dat","files/issued.dat");
    return book_exists;
}
struct tm set_issue_day(void){//return todays date
    time_t today;
    time(&today);

    struct tm *tmp,issue_day;

    tmp = localtime(&today);

    issue_day = *tmp;

    //printf("Issue  Date Set : %s\n",asctime(&issue_day));

    return issue_day;

}
struct tm set_return_day(void){//return 15 days future date
    time_t ret_day;
    time(&ret_day);

    struct tm *tmp,return_day;

    tmp = localtime(&ret_day);

    tmp->tm_mday+=15;

    return_day = *tmp;

    //printf("Return Date Set : %s\n",asctime(&return_day));

    return return_day;
}
// void set_dates(struct tm* issue_date,struct tm* return_date){
//     time_t today;time(&today);
//     time_t future;time(&future);

//     struct tm *temp = (struct tm*) malloc(sizeof(struct tm));

//     temp = localtime(&today);

//     issue_date = temp;

//     temp = (struct tm*) malloc(sizeof(struct tm));

//     temp->tm_mday+=15;

//     return_date = temp;

//     return;
// }
stock* find_book(int uid){//find book in stock
    stock* query_book = (stock*) malloc(sizeof(stock));

    FILE* stock_file = fopen("files/stock.dat","r");

    while (fread(query_book,sizeof(stock),1,stock_file)==1)
    {
        if(query_book->book.book_uid==uid){
            fclose(stock_file);
            return query_book;
        }
    }

    new_lines(1);padding(2);
    printf("Book Not Found In Records\n");
    fclose(stock_file);
    return NULL;
}

void return_book(int user_id){//Return the book and update issued data
    int book_id,book_uid;

    printf("Enter Books UID : ");
    scanf("%d",&book_uid);

    printf("Enter Books ID : ");
    scanf("%d",&book_id);

    issued *details = (issued*) malloc(sizeof(issued));

    FILE* issued_book_file = fopen("files/issued.dat","r");
    FILE* temp_file = fopen("files/temp.dat","w");

    if(issued_book_file==NULL || temp_file ==NULL){
        new_lines(1);padding(2);
        printf("problem in files\n");
        return;
    }
    while(fread(details,sizeof(issued),1,issued_book_file)==1){
        //printf("Loop ran\n");
        if(details!=NULL && details->book_id==book_id && details->book_uid==book_uid && details->issuer_id==user_id){
            details->issuer_id=-1;
            fwrite(details,sizeof(issued),1,temp_file);
        }
        else{
            fwrite(details,sizeof(issued),1,temp_file);
        }
    }

    fclose(temp_file);
    fclose(issued_book_file);

    remove("files/issued.dat");
    rename("files/temp.dat","files/issued.dat");
    free(details);
    return;
}

void issued_books(int id){//Display all Books Issued by Issuie
    user* issuie = find_user(id);//Checking if issuie in our records or not

    if(issuie==NULL){
        new_lines(1);padding(2);
        printf("User don't exists in system kindly add him\n");
        new_lines(0);padding(2);
        printf("Kindly ask him/her to register\n");
        getchar();
    }
    else{
        system("clear");
        print_details(issuie);

        issued details;
        FILE* issued_files = fopen("files/issued.dat","r");

        int serial = 1;

        new_lines(2);padding(2);

        printf("*********************************\n");

        new_lines(1);padding(2);
        printf("ALL ISSUED BOOKS ARE AS FOLLOWS\n");

        while(fread(&details,sizeof(issued),1,issued_files)==1){

            if(details.issuer_id==id){
                new_lines(1);padding(2);
                printf("----------------------------------\n");

                new_lines(0);padding(2);
                printf("Issue Number : %d\n",serial);

                new_lines(1);padding(2);
                printf("Book ID : %d\n",details.book_id);

                new_lines(0);padding(2);
                printf("Book UID : %d\n",details.book_uid);

                new_lines(1);padding(2);
                printf("Issue Date : %s\n",asctime(&details.issue_date));

                new_lines(0);padding(2);
                printf("Return Date : %s\n",asctime(&details.return_date));
                serial+=1;
            }
        }

        new_lines(0);padding(2);
        printf("----------------------------------\n");

        fclose(issued_files);

        // printf("Press Any Key to Continue\n");
        getchar();
        return;

    }

}

void books_in_records(void){
    stock* book_details = (stock*) malloc(sizeof(stock));

    FILE* books_record_files = fopen("files/stock.dat","r");

    new_lines(2);padding(3);
    printf("---------------------------------\n");

    while(fread(book_details,sizeof(stock),1,books_record_files)==1){
        new_lines(1);padding(2);
        printf("Title : %s\n",book_details->book.title);

        new_lines(1);padding(2);
        printf("Author : %s %s\n",book_details->book.author.first,book_details->book.author.last);

        new_lines(1);padding(2);
        printf("Unique ID : %d\n",book_details->book.book_uid);

        new_lines(1);padding(2);
        printf("Quantity : %d\n",book_details->qty);

        new_lines(1);padding(2);
        printf("---------------------------------\n");
    }

    getchar();
    fclose(books_record_files);
    free(book_details);
}
// user* find_user(int id){
//     FILE* users_file = fopen("users.dat","r");

//     user* query_user = (user*) malloc(sizeof(user));

//     while (fread(query_user,sizeof(user),1,users_file))
//     {
//         if(query_user->personal_details.id==id){
//             return query_user;
//         }
//     }
//     fclose(users_file);
//     return NULL;
// }