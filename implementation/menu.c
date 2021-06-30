#include <stdio.h>
#include <stdlib.h>
#include "../headers/structures.h"

void menu(void){
	//implement here

	//main menu display to ask category -  input

	//if else

	int choice=0;

	printf("Welcome to YCCE Library managment System\n");

	printf("Kindly Select your category as a user : \n");

	printf("1. Student\n");
	printf("2. Faculty\n");
	printf("3. Library Staff\n");

	printf("Enter your choice : ");
	scanf("%d",&choice);

	if(choice==1){
		printf("Welcome to student user dashboard\n");

		//add implementation of student
		//int student_choice;

		//printf("1.Isuees ....")

	}
	else if(choice==2){
		printf("Welcome to Faculty user dashboard\n");
		//add implementation of student

	}
	else if(choice==3){
		printf("Welcome to Library Staff user dashboard\n");
		//add implementation of student

	}
	else{
		printf("Wrong Choice Entered !\n");
	}

}