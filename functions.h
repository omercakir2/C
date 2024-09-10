#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>

int getInt(){
    int num;
    printf("Enter the integer");
    scanf("%d", &num);
    return num;
}

#endif