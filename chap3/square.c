/*
Program: square.c
Author: jgarrido
Description: Compute the square of a value.
*/

#include <stdio.h>

double squared (double a);

int main(){
  double x, y;
  printf("square of the value \n");
  x = 45.95;
  y = squared(x);
  printf("The square of %lf is %lf \n", x, y);
  return 0;
}

double squared(double a){
  return a*a;
}
