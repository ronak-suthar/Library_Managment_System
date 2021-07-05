#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"

void faculty(void){
    printf("Welcome to facultys Library Managment Section\n");

    member *faculty = get_details(1);

    print_details(faculty);

    //further menu
    printf("Kindly Select the transaction you would like to perform :\n");
    printf("1. Issue a Book\n");
    printf("2. Return a Book\n");


    free(faculty);
}