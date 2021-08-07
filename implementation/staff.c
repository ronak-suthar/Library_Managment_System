#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"


void staff(user* staff_user){
    printf("Welcome to Staff Library Managment Section\n");

    print_details(staff_user);

    //further menu
    printf("Kindly Select the transaction you would like to perform :\n");

    printf("1. Issue a Book\n");
    printf("2. Return a Book\n");
    printf("3. Add book to Record\n");
    printf("4. Remove book from Record\n");

    system("clear");
    free(staff_user);

}