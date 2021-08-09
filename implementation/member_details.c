#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../headers/structures.h"
#include"../headers/menu.h"

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
    new_lines(1);padding(3);
    printf("----------Welcome to Details Section--------------\n");
    
    user *person = (user*) malloc(sizeof(user));

    //getchar();
    new_lines(1);padding(2);
    printf("Kindly enter the following details one by one : \n");
    
    new_lines(1);padding(2);
    printf("First Name : ");
    scanf("%s",person->personal_details.s_name.first);
    getchar();

    new_lines(1);padding(2);
    printf("Last Name : ");
    scanf("%s",person->personal_details.s_name.last);
    getchar();
    
    new_lines(1);padding(2);
    printf("Registration ID : ");
    scanf("%u",&person->personal_details.id);
    getchar();

    new_lines(1);padding(2);
    printf("Department : ");
    scanf("%s",person->personal_details.dept);//Change this later to limit dept name

    new_lines(1);padding(2);
    printf("Mobile Number : ");
    scanf("%ld",&person->personal_details.mobile);

    person->personal_details.cat = cat;

    getchar();

    new_lines(1);padding(2);
    printf("Set Password : ");

    scanf("%s",person->password);

    return person;
}

void print_details(user* person){

    if(person==NULL){
        return;
    }
    new_lines(2);padding(1);
    printf("-------------------------------------------\n");

    new_lines(1);padding(1);
    printf("|| Full Name : %s %s ||\n",person->personal_details.s_name.first,person->personal_details.s_name.last);
    
    new_lines(1);padding(1);
    printf("|| Registration ID : %d ,Department : %s ||\n",person->personal_details.id,person->personal_details.dept);
    
    new_lines(1);padding(1);
    printf("|| Mobile Number : %ld ||\n",person->personal_details.mobile);
    
    new_lines(1);padding(1);
    printf("-------------------------------------------\n");
}