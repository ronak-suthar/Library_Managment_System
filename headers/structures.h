#ifndef STUCTURES_H
#define STUCTURES_H

typedef struct name{
    char *first;
    char *last;
}name;

typedef struct book{
    char* title;
    short int id;
    struct name *author;
}book;

typedef enum category{Staff=0,Faculty=1,Student=2} category;

typedef struct member{
    struct name s_name;
    unsigned int id;
    char *dept;
    int mobile;
    category cat;
}member;




#endif