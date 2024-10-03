#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <stdio.h>

int sayHelloWorld(){
    printf("Hello World!");
    return 0;
}


int getInt(){
    int num;
    printf("Enter the integer : ");
    scanf("%d", &num);
    return num;
}
double getDouble(){
    double num;
    printf("Enter the integer : ");
    scanf("%lf", &num);
    return num;
}

#endif