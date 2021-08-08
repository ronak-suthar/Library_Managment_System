#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"
#include"../headers/members.h"
#include"../headers/transactions.h"
#include"../headers/menu.h"


user* find_user(int id){

    FILE* ptr = fopen("files/users.dat","r");

    if(ptr==NULL){
        printf("file issues\n");
        return NULL;
    }
    user* finder = (user*) malloc(sizeof(user));

    while (fread(finder,sizeof(user),1,ptr)==1)
    {   
        if(finder->personal_details.id==id){
            return finder;
        }
    }

    fclose(ptr);
    return NULL;
}
void auth(int cat){
    padding(2);
    printf("Welcome to Library Managment Software\n");

    
    new_lines(2);padding(3);
    printf("--------Authentication-----------\n");

    new_lines(2);padding(1);
    printf("Kindly Login to proceed\n");

    int user_id;

    new_lines(1);padding(1);
    printf("Enter your Registration Number : ");
    scanf("%d",&user_id);

    user* user_data = find_user(user_id);

    if(user_data!=NULL){
        char usr_pass[15]={};

        getchar();
        new_lines(1);padding(1);
        printf("Kindly Enter Password : ");
        scanf("%s",usr_pass);

        new_lines(1);padding(1);
        printf("Entered Password : %s\n",usr_pass);

        if(user_data->personal_details.cat!=cat){
            getchar();
            printf("Wrong Category Chosen !, Select Correct Category\n");
            printf("Press Any Key to Continue\n");
            
            getchar();
            system("clear");
            main();
        }
        else if(strcmp(usr_pass,user_data->password)==0){
            new_lines(2);padding(1);
            printf("Correct password\n");
            
            print_details(user_data);
        }
        else{
            getchar();

            new_lines(2);padding(1);
            printf("Incorrect password Enter Details Again !\n");
            
            new_lines(2);padding(1);
            printf("Press Any Key to Continue\n");
            getchar();
            system("clear");
            auth(cat);
        }

    }
    else{   
            new_lines(2);padding(1);
            printf("Record doesn't exist in system kindly provide details to create\n");

            FILE* ptr = fopen("files/users.dat","a");

            user_data = (user*) malloc(sizeof(user));

            user_data = get_details(cat);

            fwrite(user_data,sizeof(user),1,ptr);

            fclose(ptr);

    }

    system("clear||cls");
    int user_type = user_data->personal_details.cat;

    if(user_type==0){//Staff
        printf("Staff Called\n");
        staff(user_data);
    }
    else if(user_type==1){//Faculty
        faculty(user_data);
    }
    else if(user_type==2){//Student
        student(user_data);
    }

}