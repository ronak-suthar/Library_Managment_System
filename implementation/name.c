#include<stdio.h>
#include<stdlib.h>
#include"../headers/structures.h"


char* get_name(void){
    char* ptr;char ltr=0;int size=10,len=0;

    ptr = (char*) malloc(sizeof(char)*size);

    while('\n'!=(ltr=getchar())){

        ptr[len++] = ltr;

        if(len==size){
            ptr = (char*) realloc(ptr,(++size)*sizeof(char));
        }
    }

    return ptr;

}