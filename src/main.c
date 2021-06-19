#include<stdio.h>
#include"../headers/structures.h"

int main(void){

    int category=0;

    category = auth(); //authentication and categorization of user

    menu(category); //display of menu according to category

    return 0;
}