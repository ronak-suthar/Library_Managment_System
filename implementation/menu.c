#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"../headers/structures.h"

char CommonChoise(void);
char Username();
char Password();


char Pass[30],uName[30];   

void menu()
{
	char ch,chreturn,employchoice,studentchoice,libstaffchoice;
    char oriPass[30],oriName[30];
	while(1)
	{
		MENU:

		printf("\n\n\n\t\t**** WELCOME TO YCCE LIBRARY ****");

			//Menu Display
			printf("\n\nWhether you are : 1. an Employee \n\t\t  2. a Student \n\t\t  3. a Library staff \n");
			printf("Or press any key to get out of the window \n");
	    	ch=getch();
			switch(ch)
			{
				case '1': //Employee login
						  printf("\nWelcome! In Employee's Portal:- \n");
						  ERestartLogin:
	//					  printf("Please enter your username and password \n");
	    	              Username();
				          Password();

						  printf("\n\nUSERNAME is:   %s",uName);
						  printf("\nPASSWORD is:   %s",Pass);
				//		  if(Pass==oriPass && uName==oriName)
						  {
							  EMENU:
							  chreturn=CommonChoise();
							  if(chreturn=='m')
							  {
								  printf("\nEnter your choice: \n\t\t5. Update Book Details \n\t\t6. Update Employ Details \n");
								  printf("Enter 'b' to go to main menu \n");
								  printf("Or press any key to get out of the window \n");
								  employchoice=getch();
								  switch(employchoice)
								  {
									  case '5': printf("Please update book details here \n");
									            break;
									  case '6': printf("Update your details \n");
									            break;
									  case 'b': goto MENU;
									  default : exit(0);
								  }
							  }
							  else if(chreturn=='b')
							  {
								  goto MENU;
							  }
						  }
				/*		  else
						  {
							  printf("Oops!! You have entered wrong username or password \n");
							  printf("Please enter correct username or password \n");
							  goto ERestartLogin;
						  }*/
			//			  break;
			              goto EMENU;

				case '2': //Student login
						  printf("\nWelcome! In Student's Portal:- \n");   
						  SRestartLogin:
	//					  printf("Please enter your username and password \n");
	    	              Username();
				          Password();
					      printf("\n\nUSERNAME IS:  %s", uName);
						  printf("\nPASSWORD IS:  %s", Pass);

				//         if(Pass==oriPass && uName==oriName)
						   {
							   SMENU:
						 	   chreturn=CommonChoise();
							   if(chreturn=='m')
							   {
								   printf("Enter your choice: \n\t\t5. Update student details \n");
								   printf("Enter 'b' to go to main menu \n");
								   printf("Or press any key to get out of the window \n");
								   studentchoice=getch();
								   switch(studentchoice)
								   {
									   case '5': printf("Please update your details \n");
									             break;
									   case 'b': goto MENU;
									   default : exit(0);
								   }
							   }
							   else if(chreturn=='b')
							   {
								   goto MENU;
							   }
						   }
				/*		   else
						   {
							   printf("Oops!! You have entered wrong username or password \n");
							   printf("Please enter correct username or password \n");
							   goto SRestartLogin;
						   }*/
						   goto SMENU;
			//			   break;

	    	    case '3': //Library staff login
				          printf("\nWelcome! In Library staff Portal:- \n");
						  LRestartLogin:
	//					  printf("Please enter your username and password \n");
						  Username();
				          Password();
						  printf("\n\nUSERNAME IS:  %s", uName);
						  printf("\nPASSWORD IS:  %s", Pass);
				//          if(Pass==oriPass && uName==oriName)
						  {
							  LMENU:
							  chreturn=CommonChoise();
							  if(chreturn=='m')
							  {
								  printf("\nEnter your choice: \n\t\t6. Update Book Details \n\t\t7. Library Management Details \n\t\t8. Update 	Employ's detail  \n\t\t9. Update student's details \n");
								  printf("Enter 'b' to go to main menu \n");
								  printf("Or press any key to get out of the window \n");
								  libstaffchoice=getch();
								  switch(libstaffchoice)
								  {
									  case '6': printf("Please update book details here \n");
									            break;
									  case '7': printf("See Library Management Details \n");
									            break;
									  case '8': printf("Please Update Employ's details \n");
									            break;
									  case '9': printf("Please Update Student's details \n");
									            break;
									  case 'b': goto MENU;
									  default : exit(0);
								  }
							  }
							  else if(chreturn=='b')
							  {
								  goto MENU;
							  }
						  }
				/*		  else
						  {
							  printf("Oops!! You have entered wrong username or password \n");
							  printf("Please enter correct username or password \n");
							  goto LRestartLogin;
						  }*/
						  goto LMENU;
			//		  break;

			default: printf("Thankyou,Visit AGAIN! \n\n");
    	             exit(0);
		}	    

	}
}

char CommonChoise(void)
{
    char ch1;
    printf("\nEnter your choice: \n\t\t1. Book Issue or Return \n\t\t2. Reissue Book \n\t\t3. Due Date Check \n\t\t4. Check Fine \n");
    printf("Enter 'm' for more option \n");
	printf("Enter 'b' to go to main menu \n");
	printf("Or press any key to get out of the window \n");
    ch1=getch();
    switch(ch1)
    {
        case '1': printf("Please name or code the book you want to issue or return \n");
                  break;
        case '2': printf("Enter name or code of the book that you want to reissue \n");
                  break;
        case '3': printf("Due Date check \n");
                  break;
        case '4': printf("Check Fine \n");
                  break;
        case 'm': return 'm';
		case 'b': return 'b';
        default : exit(0); 
    }   
}

char Username()
{
	//char userName[30];
	printf("ENTER THE USERNAME:  ");
	scanf("%s",uName);
}

char Password()
{   
    int i=0;
 //   char Pass[30];
    printf("ENTER THE PASSWORD:  ");
    do
    {
        Pass[i]=getch();
        if(Pass[i]!='\r' && Pass[i]!='\b')
        {
            printf("*");
        }
        else if(Pass[i]=='\b')
        {
            printf("\b");
            Pass[i]='\b'; 
        }
        i++;
    }while(Pass[i-1]!='\r');

    Pass[i-1]='\0';
//    printf("\n\tYOUR PASSWORD IS:  %s", Pass);
}