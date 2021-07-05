#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../headers/structures.h"

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
member* get_details(int cat){
    printf("Welcome to Details Section\n");
    
    member *person = (member*) malloc(sizeof(member));

    getchar();

    printf("Kindly enter the following details one by one : \n");
    printf("First Name : ");
    
    person->s_name.first =  get_string();

    printf("Last Name : ");
    person->s_name.last =  get_string();

    printf("Registration ID : ");
    scanf("%u",&person->id);

    getchar();

    printf("Department : ");
    person->dept = get_string();//Change this later to limit dept name

    printf("Mobile Number : ");
    scanf("%d",&person->mobile);

    person->cat = cat;

    return person;
}

void print_details(member* person){
    if(person==NULL){
        return;
    }
    printf("-------------------------------------------\n");
    printf("Full Name : %s %s\n",person->s_name.first,person->s_name.last);
    printf("Registration ID : %d ,Department : %s\n",person->id,person->dept);
    printf("Mobile Number : %d\n",person->mobile);
    printf("-------------------------------------------\n");
}