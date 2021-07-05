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

	//Login Authentication Before giving futher facilities

	if(choice==1)
	{
		printf("Welcome to student user dashboard\n");
		printf("Transactions that you can perform : \n");

		printf("1.Book Issue\n");
		printf("2.Reissue Book\n");
		printf("3.Book Return\n");
		printf("3.Due Date Check\n");
		printf("4.Fine Check\n");

		printf("Enter you choice of transaction : ");

		int student_choice=0;
		scanf("%d",&student_choice);

		if(student_choice==1){
			printf("You want to Issue or Return Book!");
			//Further Display
		}
		else if(student_choice==2){
			printf("You want to Reissue Book!");
			//Further Display
		}
		else if(student_choice==3){
			printf("You want to check Due Date of Book!");
			//Further Display
		}
		else if(student_choice==4){
			printf("You want to check the amount of FINE!");
			//Further Display
		}
		else{
			printf("Enter Valid Choice!");
		}

	}

	else if(choice==2)
	{
		printf("Welcome to Faculty user dashboard\n");
		printf("Below are transactions that you can perform : \n");

		printf("1.Add New Book\n");
		printf("2.Update Student's Details\n");
		printf("3.Update Book Details\n");
		printf("4.Book Issue or Return\n");
		printf("5.Reissue Book\n");
		printf("6.Due Date Check\n");
		printf("7.Fine\n");
		
		printf("Enter you choice of transaction : ");
		int faculty_choice=0;
		scanf("%d",&faculty_choice);

		if(faculty_choice==1){
			printf("You Want to Add New Book!");
			//Further Display
		}
		else if(faculty_choice==2){
			printf("You want to Update Student Details!");
			//Further Display
		}
		else if(faculty_choice==3){
			printf("You want to Update Book Details!");
			//Further Display
		}
		else if(faculty_choice==4){
			printf("You want to Issue or Return Book!");
			//Further Display
		}
		else if(faculty_choice==5){
			printf("You want to Reissue Book!");
			//Further Display
		}
		else if(faculty_choice==6){
			printf("You want to check Due Date of Book!");
			//Further Display
		}
		else if(faculty_choice==7){
			printf("You want to check the amount of FINE!");
			//Further Display
		}
		else{
			printf("Enter Valid Choice!");
		}

	}

	else if(choice==3)
	{
		printf("Welcome to Library Staff user dashboard\n");
		printf("Below are transactions that you can perform : \n");

		printf("1.Add New Book\n");
		printf("2.Update Student's Details\n");
		printf("3.Update Book Details\n");
		printf("4.Book Issue or Return\n");
		printf("5.Reissue Book\n");
		printf("6.Due Date Check\n");
		printf("7.Fine\n");
		printf("8.Update Employee's Details\n");
		printf("9.Library Management Details\n");

		printf("Enter you choice of transaction : ");
		int staff_choice=0;
		scanf("%d",&staff_choice);

		if(staff_choice==1){
			printf("You Want to Add New Book!");
			//Further Display
		}
		else if(staff_choice==2){
			printf("You want to Update Student Details!");
			//Further Display
		}
		else if(staff_choice==3){
			printf("You want to Update Book Details!");
			//Further Display
		}
		else if(staff_choice==4){
			printf("You want to Issue or Return Book!");
			//Further Display
		}
		else if(staff_choice==5){
			printf("You want to Reissue Book!");
			//Further Display
		}
		else if(staff_choice==6){
			printf("You want to check Due Date of Book!");
			//Further Display
		}
		else if(staff_choice==7){
			printf("You want to check the amount of FINE!");
			//Further Display
		}
		else if(staff_choice==8){
			printf("You want to update Employee's Details");
			//Further Display
		}
		else if(staff_choice==9){
			printf("You want to go with Library Management Details");
			//Further Display
		}
		else{
			printf("Enter Valid Choice!");
		}

	}

	else{
		printf("Wrong Choice Entered !\n");
	}

}