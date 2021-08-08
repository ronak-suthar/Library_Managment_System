#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"
#include"../headers/transactions.h"
#include"../headers/authentication.h"

void staff(user* staff_user){
    printf("Welcome to Staff Library Managment Section\n");

    print_details(staff_user);

    //further menu
    printf("Kindly Select the transaction you would like to perform :\n");

    printf("1. Issue a Book\n");
    printf("2. Return a Book\n");
    printf("3. Find Issued Books\n");
    printf("4. Add book to Records\n");
    printf("5. Exit the Program\n");

    int choice;
    getchar();
    printf("Enter your choice : ");
    scanf("%d",&choice);

    if(choice >0 && choice<4){
        int id;
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
    else{
        exit(0);
    }

    getchar();
    //system("clear");
    staff(staff_user);
    free(staff_user);
}