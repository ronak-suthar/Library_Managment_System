#include<stdio.h>
#include<stdlib.h>
//#include"../headers/structures.h"

int menu(void){
    printf("*********************Welcome to Library of YCCE*******************\n");
    
    for(int i=0;i<5;i++) printf("\n");

    printf("Kindly Select your category to move ahead : \n");
    printf("1. Library Staff\n");
    printf("2. Faculty\n");
    printf("3. Student\n");
    printf("4. Exit this program\n");

    int choice=0;
    printf("Enter your category : ");
	scanf("%d",&choice);

	for(int i=0;i<5;i++) printf("\n");

    if(choice!=1 && choice!=2 && choice!=3){
        exit(1);
    }

    return choice-1;
}