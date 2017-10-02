/*
Program: areacirtrig.c
Author: saichrla
Description: Prints area anf circomference of the triangle
*/

#include<stdio.h>
#include<math.h>

double cirtrig(double a, double b, double c);
double areatrig(double a, double b, double c);

int main(void){
  double x, y, z;
  double cir, area;
  printf("Enter the 3 sides of the triangel x <return> y <return> z \n");
  scanf("%lf %lf %lf", &x, &y, &z);
  cir = cirtrig(x, y, z);
  area = areatrig(x, y, z);
  printf("The circomference of the triangle = %lf \nThe area of the triangel = %lf\n", cir, area);
  return 0;
  
}

double cirtrig(double a, double b, double c){
  return a+b+c;
}

double areatrig(double a, double b, double c){
  double s = (a+b+c)/2;
  return sqrt((s)*(s-a)*(s-b)*(s-c));
}
