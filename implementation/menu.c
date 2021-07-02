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
		printf("Enter your choice");

		printf("\n1.Book Issue or Return");
		printf("\n2.Reissue Book");
		printf("\n3.Due Date Check");
		printf("\n4.Fine");

		int student_choice=0;
		scanf("%d",&student_choice);

		if(student_choice==1){
			printf("You want to Issue or Return Book!");
			//Further Display
		else if(student_choice==2){
			printf("You want to Reissue Book!");
			//Further Display
		else if(student_choice==3){
			printf("You want to check Due Date of Book!");
			//Further Display
		else if(student_choice==4){
			printf("You want to check the amount of FINE!");
			//Further Display
		else{
			printf("Enter Valid Choice!");
		}

	}

	else if(choice==2)
	{
		printf("Welcome to Faculty user dashboard\n");
		printf("Enter your choice : \n");

		printf("\n1.Add New Book");
		printf("\n2.Update Student's Details");
		printf("\n3.Update Book Details");
		printf("\n4.Book Issue or Return");
		printf("\n5.Reissue Book");
		printf("\n6.Due Date Check");
		printf("\n7.Fine");
		
		int faculty_choice=0;
		scanf("%d",&faculty_choice);

		if(faculty_choice==1){
			printf("You Want to Add New Book!");
			//Further Display
		else if(faculty_choice==2){
			printf("You want to Update Student Details!");
			//Further Display
		else if(faculty_choice==3){
			printf("You want to Update Book Details!");
			//Further Display
		else if(faculty_choice==4){
			printf("You want to Issue or Return Book!");
			//Further Display
		else if(faculty_choice==5){
			printf("You want to Reissue Book!");
			//Further Display
		else if(faculty_choice==6){
			printf("You want to check Due Date of Book!");
			//Further Display
		else if(faculty_choice==7){
			printf("You want to check the amount of FINE!");
			//Further Display
		else{
			printf("Enter Valid Choice!");
		}

	}

	else if(choice==3)
	{
		printf("Welcome to Library Staff user dashboard\n");
		printf("Enter your choice : ");

		printf("\n1.Add New Book");
		printf("\n2.Update Student's Details");
		printf("\n3.Update Book Details");
		printf("\n4.Book Issue or Return");
		printf("\n5.Reissue Book");
		printf("\n6.Due Date Check");
		printf("\n7.Fine");
		printf("\n8.Update Employee's Details");
		printf("\n9.Library Management Details");


		int staff_choice=0;
		scanf("%d",&staff_choice);

		if(staff_choice==1){
			printf("You Want to Add New Book!");
			//Further Display
		else if(staff_choice==2){
			printf("You want to Update Student Details!");
			//Further Display
		else if(staff_choice==3){
			printf("You want to Update Book Details!");
			//Further Display
		else if(staff_choice==4){
			printf("You want to Issue or Return Book!");
			//Further Display
		else if(staff_choice==5){
			printf("You want to Reissue Book!");
			//Further Display
		else if(staff_choice==6){
			printf("You want to check Due Date of Book!");
			//Further Display
		else if(staff_choice==7){
			printf("You want to check the amount of FINE!");
			//Further Display
		else if(staff_choice==8){
			printf("You want to update Employee's Details");
			//Further Display
		else if(staff_choice==9){
			printf("You want to go with Library Management Details");
			//Further Display
		else{
			printf("Enter Valid Choice!");
		}

	}

	else{
		printf("Wrong Choice Entered !\n");
	}

}