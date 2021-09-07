//
// Created by DHANUKA on 9/7/2021.
//Call by reference
//
#include <stdio.h>

int addNumber(int*,int*);
int main(){
    int a=10,b=20;
    printf("%d %d\n",a, b);//10 20
    int sum = addNumber(&a,&b);
    printf("%d \n",sum);//3000
    printf("%d %d\n",a, b);//1000 2000
    return 0;
}
int addNumber(int *x,int *y){
    *x=1000;
    *y=2000;
    return *x+*y;
}
