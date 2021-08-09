#include<stdio.h>
#include<stdlib.h>
#include"../headers/menu.h"
#include"../headers/authentication.h"


int main(void){
    system("clear");
    auth(menu());//Display Main Menu and Get Category of User
    return 0;
}