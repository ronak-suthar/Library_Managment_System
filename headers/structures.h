#ifndef STUCTURES_H
#define STUCTURES_H

struct name{
    char *first;
    char *last;
};

struct book{
    char* title;
    short int id;
    struct name *author;
};

struct member{
    struct name *s_name;
    unsigned int id;
    char *dept;
};

struct student{
    struct member *s_member;
    short int yop; //year of passing
};

struct employee{
    struct member *e_member;
    char lib_emp; //library employee : true or false
};


#endif