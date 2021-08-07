#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"

void faculty(user* faculty_user){
    printf("Welcome to facultys Library Managment Section\n");

    print_details(faculty_user);

    //further menu
    printf("Kindly Select the transaction you would like to perform :\n");
    printf("1. Issue a Book\n");
    printf("2. Return a Book\n");

    system("clear");
    free(faculty_user);
}