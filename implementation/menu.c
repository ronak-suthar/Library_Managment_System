#include<stdio.h>
#include<stdlib.h>

void padding(int pad){
    while(pad--){
        printf("    ");
    }
}
void new_lines(int lines){
    while(lines--){
        printf("\n");
    }
}
int menu(void){
    new_lines(0);padding(2);
    printf("*********************Welcome to Library Managment Software*********************\n");
    new_lines(1);padding(3);
    printf("-----------------------MAIN MENU ----------------------------\n");

    new_lines(2);padding(2);
    printf("Kindly Select your category to move ahead : \n");

    new_lines(1);padding(3);
    printf("1. Library Staff\n");

    new_lines(1);padding(3);
    printf("2. Faculty\n");

    new_lines(1);padding(3);
    printf("3. Student\n");

    new_lines(1);padding(3);
    printf("4. Exit this program\n");

    int choice=0;
    new_lines(1);padding(4);
    printf("Enter your category : ");
	scanf("%d",&choice);

    if(choice!=1 && choice!=2 && choice!=3){
        exit(1);
    }

    new_lines(1);padding(3);
    printf("Press Any Key To Move Ahead\n");
    getchar();
    system("clear||cls");

    return choice-1;
}