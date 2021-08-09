#ifndef STUCTURES_H
#define STUCTURES_H
#include<time.h>

typedef struct name{
    char first[15];
    char last[15];
}name;

typedef struct books{
    char title[30];
    struct name author;
    int book_uid;
}books;

typedef enum category{Staff=0,Faculty=1,Student=2} category;

typedef struct member{
    name s_name;
    unsigned int id;
    char dept[2];
    long mobile;
    category cat;
}member;


typedef struct user{
    member personal_details;
    char password[10];
}user;

typedef struct stock{
    books book;
    int qty;
}stock;

typedef struct issued{
    int book_id;
    int book_uid;
    int issuer_id;
    struct tm issue_date;
    struct tm return_date;
}issued;
#endif