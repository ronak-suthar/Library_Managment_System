#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
	int ch1,ch2,ch3;
	while(1){
	printf("\n");
	printf("*********** WELCOME TO YCCE LIBRARY ***********");


	//Menu Display
	printf("\nSelect:\n 1.Employee\n 2.Student\n 3.EXIT\n");

	scanf("%d",&ch1);
	switch (ch1)
	{
		case 1: //Employee login 
				//if verified
				printf("Welcome! In Employee's Portal:- ");					//Employee
				printf("\nWhat you want to do :\n 1.Add New Book\n 2.Update Student's Details\n 3.Update Book Details\n 4.Book Issue or Return\n 5.Reissue Book\n 6.Due Date Check\n 7.Fine\n 8.EXIT\n");
				scanf("%d",&ch2);
				switch (ch2)
				{
					case 1:printf("You Want to Add New Book!");
							break;

					case 2:printf("You want to Update Student Details!");
							break;

					case 3:printf("You want to Update Book Details!");
							break;
							
					case 4:printf("You want to Issue or Return Book!");
							break;

					case 5:printf("You want to Reissue Book!");
							break;

					case 6:printf("You want to check Due Date of Book!");
							break;

					case 7:printf("You want to check the amount of FINE!");
							break;

					case 8: exit(0);
						break;

					default: printf("Enter Valid Choice!");
							break;			
				}
				break;

		case 2: //Student login 
				//if verified
				printf("Welcome! In Student's Portal:- ");						//Student
				printf("\nWhat you want to do :\n 1.Book Issue or Return\n 2.Reissue Book\n 3.Due Date Check\n 4.Fine\n 5.EXIT\n");
				scanf("%d",&ch3);
				switch (ch3)
				{
					case 1:printf("You want to Issue or Return Book!");
							break;

					case 2:printf("You want to Reissue Book!");
							break;

					case 3:printf("You want to check Due Date of Book!");
							break;

					case 4:printf("You want to check the amount of FINE!");
							break;

					case 5: exit(0);
							break;

					default: printf("Enter Valid Choice!");
							break;			
				}
				break;

		case 3: exit(0);
				break;

		default: printf("Enter valid Choice");
	}

	printf("\nThankyou,Visit AGAIN! ");
	printf("\n");     //we can add name here
	}

}

               