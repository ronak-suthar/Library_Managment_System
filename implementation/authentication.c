//First Step
//First Authenticate user as an employee/lib employee/student
//then call menu display according as per user category


//Currently lets take inputs usr id & pass
//authentication have to be done later

#include<stdio.h>
#include<stdlib.h>
#include"../headers/authentication.h"

char* get_usr_id(void){
    char* ptr;char ltr=0;int size=10,len=0;

    ptr = (char*) malloc(sizeof(char)*size);

    while('\n'!=(ltr=getchar())){

        ptr[len++] = ltr;

        if(len==size){
            printf("User ID length cannot exceed 10 characters\n");
        }
    }

    return ptr;

}

char* get_pass(void){
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

int length(char* ptr){
    int len=0;

    while(*ptr!='\n'){
        len++;ptr++;
    }

    return ptr;
}

int auth(void){

    char* usr_id;
    char* pass;

    printf("Welcome to YCCE Library Managment System\n");
    printf("Enter your member id : ");
    usr_id = get_usr_id();
    printf("Enter password : ");
    pass = get_pass();

    printf("Data Stored\n");

    //user id 8 digits then student
    //user id 4 digits then faculty
    //user id 6 digits then library staff

    return length(usr_id);

}