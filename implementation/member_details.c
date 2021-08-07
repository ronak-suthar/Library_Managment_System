#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../headers/structures.h"
/*
char* get_string(void){
    char* ptr;char ltr=0;int size=10,len=0;

    ptr = (char*) malloc(sizeof(char)*size);

    while('\n'!=(ltr=getchar())){

        ptr[len++] = ltr;

        if(len==size){
            ptr = (char*) realloc(ptr,(++size)*sizeof(char));
        }
    }

    return ptr;

}
*/
user* get_details(int cat){
    printf("Welcome to Details Section\n");
    
    user *person = (user*) malloc(sizeof(user));

    getchar();

    printf("Kindly enter the following details one by one : \n");
    
    printf("First Name : ");
    scanf("%s",person->personal_details.s_name.first);
    getchar();

    printf("Last Name : ");
    scanf("%s",person->personal_details.s_name.last);
    getchar();
    
    printf("Registration ID : ");
    scanf("%u",&person->personal_details.id);
    getchar();

    printf("Department : ");
    scanf("%s",person->personal_details.dept);//Change this later to limit dept name

    printf("Mobile Number : ");
    scanf("%ld",&person->personal_details.mobile);

    person->personal_details.cat = cat;

    getchar();

    printf("Set Password : ");

    scanf("%s",person->password);

    return person;
}

void print_details(user* person){

    if(person==NULL){
        return;
    }

    printf("-------------------------------------------\n");
    printf("Full Name : %s %s\n",person->personal_details.s_name.first,person->personal_details.s_name.last);
    printf("Registration ID : %d ,Department : %s\n",person->personal_details.id,person->personal_details.dept);
    printf("Mobile Number : %ld\n",person->personal_details.mobile);
    printf("-------------------------------------------\n");
}