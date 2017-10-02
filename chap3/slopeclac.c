/*
Pragram: slopecalc.c
Author: saichrla
Description: Prnt the slope of line passing through two given points.
*/

#include <stdio.h>

double slopef(double x1, double y1, double x2, double y2);

int main(){
  double x1, y1, x2, y2, s; //Coordinats and slope
  printf("Enter the cordinates of the first point x1 <return> y1 \n");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter the cordinates of the second point x2 <return> y2 \n");
  scanf("%lf %lf", &x2, &y2);
  s = slopef(x1, y1, x2, y2);
  printf("The slo[pe of the line passing through the given points is: %lf \n", s);
  return 0;
}



double slopef(double x1, double y1, double x2, double y2){
  return (y2-y1)/(x2-x1);
}
  
