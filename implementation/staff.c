#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"
#include"../headers/transactions.h"
#include"../headers/authentication.h"
#include"../headers/menu.h"

void staff(user* staff_user){
    new_lines(1);padding(3);
    printf("Welcome to Staff Library Managment Section\n");


    print_details(staff_user);

    //further menu
    new_lines(2);padding(2);
    printf("Kindly Select the transaction you would like to perform :\n");

    new_lines(1);padding(2);
    printf("1. Issue a Book\n");

    new_lines(1);padding(2);
    printf("2. Return a Book\n");

    new_lines(1);padding(2);
    printf("3. Find Issued Books\n");

    new_lines(1);padding(2);
    printf("4. Add book to Records\n");

    new_lines(1);padding(2);
    printf("5. View All Books in Record\n");

    new_lines(1);padding(2);
    printf("6. Exit the Program\n");

    int choice;
    // getchar();
    new_lines(2);padding(3);
    printf("Enter your choice : ");
    scanf("%d",&choice);

    system("clear");
    if(choice >0 && choice<4){
        int id;
        new_lines(1);padding(2);
        printf("Registration ID for which books has to be issued : ");
        scanf("%d",&id);

        if(choice==1){
            issue(id);
        }
        else if(choice==2){
            return_book(id);
        }
        else if(choice==3){
            issued_books(id);
        }
    }
    else if(choice==4){
        add();
    }
    else if(choice==5){
        books_in_records();
    }
    else{
        exit(0);
    }

    new_lines(1);padding(3);
    printf("Press Any key to Go Back to Staff Menu\n");
    getchar();
    system("clear");
    staff(staff_user);
    free(staff_user);
}