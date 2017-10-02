/*
Program: crcmsquare.c
Author: saichrla
Discription: Prints the circomference of the square
*/

#include<stdio.h>

int main(){
        double s, c;
        printf("Enter the side length:");
        scanf("%lf",&s);
        c = 4*s;
        printf("The circomference of the square with given side: %lf\n", c);
        return 0;
}
