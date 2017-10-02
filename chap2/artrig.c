/*
Program: artrig.c
author: saichrla
Description: To compute the area of the triangle given the base and altitude.
*/

#include <stdio.h>

int main(void){
  double a, b, A ; //a-Altitude, b-Base, A-Area
  printf("Enter the values of base and height spaced by <return> \n");
  scanf("%lf %lf", &b, &a);
  A = 0.5 * a * b;
  printf("The area of the triangle with given base and height is: %lf\n", A);
  return 0;
}
