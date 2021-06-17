#include<stdio.h>

//int 4bytes short int 2bytes (-2^(n-1)) to (2^(n-1))

struct book
{
    char* name;
    char* author;
    short int id;
};

struct name{
    char* first;
    char* last;
};

struct employee
{
    struct name e_name;
    char dept;//enum 
    short int id;
};

struct student{
    struct name s_name;
    int id;
    char dept;
};

int main(void){

    //struct book *etc_books[] = {};
    //Tasks
    //1. Struture
    //2. Issue date
    //3. Menu
    //4. Login System{\

    /*
    YCCE
        Welcome to libaray ,,....

        Username
        Password
    */
   
    //escape sequence - /n,/r


    return 0;
}