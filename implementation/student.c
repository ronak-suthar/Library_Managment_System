#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"

void student(void){
    printf("Welcome to Students Library Managment Section\n");

    member *student = get_details(2);

    print_details(student);

    //further menu
    printf("Kindly Select the transaction you would like to perform :\n");

    printf("1. Issue a Book\n");
    printf("2. Return a Book\n");
    printf("3. Check Fine\n");

    
    free(student);

}