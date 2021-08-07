#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../headers/structures.h"
#include"../headers/member_details.h"
#include"../headers/members.h"

user* find_user(int id){

    FILE* ptr = fopen("files/users.dat","r");

    if(ptr==NULL){
        printf("file issues\n");
        return NULL;
    }
    user* finder = (user*) malloc(sizeof(user));

    while (fread(finder,sizeof(user),1,ptr)==1)
    {   
        if(finder->personal_details.id==id){
            return finder;
        }
    }

    fclose(ptr);
    return NULL;
}
void auth(int cat){
    printf("Welcome to Library Managment Software\n");

    printf("Kindly Login to proceed\n");

    int user_id;

    printf("Enter your registration number : ");
    scanf("%d",&user_id);

    user* user_data = find_user(user_id);

    if(user_data!=NULL){
        char usr_pass[15]={};

        printf("kindly enter password : ");
        getchar();
        scanf("%s",usr_pass);

        printf("Entered Password : %s\n",usr_pass);

        if(strcmp(usr_pass,user_data->password)==0){
            printf("Correct password\n");
            print_details(user_data);
        }
        else{
            printf("Incorrect password Enter Details Again !\n");
            auth(cat);
        }

    }
    else{   
            printf("Record doesn't exist in system kindly provide details to create\n");

            FILE* ptr = fopen("files/users.dat","a");

            user_data = (user*) malloc(sizeof(user));

            user_data = get_details(cat);

            fwrite(user_data,sizeof(user),1,ptr);

            fclose(ptr);

    }

    system("clear||cls");
    int user_type = user_data->personal_details.cat;

    if(user_type==0){//Staff
        faculty(user_data);
    }
    else if(user_type==1){//Faculty
        staff(user_data);
    }
    else if(user_type==2){//Student
        student(user_data);
    }


}