#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"

void student(user* student_user){
    printf("Welcome to Students Library Managment Section\n");

    print_details(student_user);

    //further menu
    printf("Kindly Select the transaction you would like to perform :\n");

    printf("1. Issue a Book\n");
    printf("2. Return a Book\n");
    printf("3. Check Fine\n");
    printf("4. All Issued Books\n");

    //getchar();
    //system("clear");

    free(student_user);

}