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
    padding(2);
    printf("*********************Welcome to Library Managment Software*********************\n");
    padding(3);
    printf("-----------------------MAIN MENU ----------------------------\n");

    new_lines(2);

    printf("Kindly Select your category to move ahead : \n");

    padding(2);
    printf("1. Library Staff\n");

    padding(2);
    printf("2. Faculty\n");

    padding(2);
    printf("3. Student\n");

    padding(2);
    printf("4. Exit this program\n");

    int choice=0;
    printf("Enter your category : ");
	scanf("%d",&choice);

    if(choice!=1 && choice!=2 && choice!=3){
        exit(1);
    }

    printf("Press Any Key To Move Ahead\n");
    getchar();
    system("clear||cls");

    return choice-1;
}