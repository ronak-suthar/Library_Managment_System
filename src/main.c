#include<stdio.h>
#include"../headers/menu.h"
#include"../headers/members.h"


int main(void){

    int cat = menu();//Display Main Menu and Get Category of User

    if(cat==0){//Staff
        staff();
    }
    else if(cat==1){//Faculty
        faculty();
    }
    else if(cat==2){//Student
        student();
    }

    return 0;
}