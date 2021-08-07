#ifndef STUCTURES_H
#define STUCTURES_H

typedef struct name{
    char first[15];
    char last[15];
}name;

typedef struct book{
    char title[15];
    short int id;
    struct name author;
}book;

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

#endif