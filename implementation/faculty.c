#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"
#include"../headers/menu.h"
#include"../headers/transactions.h"

void faculty(user* faculty_user){

    new_lines(1);padding(3);
    printf("Welcome to Faculty's Library Managment Section\n");


    print_details(faculty_user);

    //further menu

    new_lines(2);padding(2);
    printf("Kindly Select the transaction you would like to perform :\n");

    new_lines(1);padding(2);
    printf("1. Issue a Book\n");

    new_lines(1);padding(2);
    printf("2. Return a Book\n");

    new_lines(1);padding(2);
    printf("3. All Issued Books\n");

    new_lines(1);padding(2);
    printf("4. EXIT the Program\n");

    int choice;

    new_lines(1);padding(3);
    printf("Enter You Choice : ");
    scanf("%d",&choice);

    if(choice==1){
        issue(faculty_user->personal_details.id);
    }
    else if(choice==2){
        return_book(faculty_user->personal_details.id);
    }
    else if(choice==3){
        issued_books(faculty_user->personal_details.id);
    }
    else if(choice==4){
        exit(0);
    }

    printf("Press Any key to continue\n");
    getchar();
    faculty(faculty_user);
    system("clear");
    free(faculty_user);
}