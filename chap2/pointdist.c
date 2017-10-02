/*
Program: pointdist.c
author: saichrla
description: prints the distance between 2 points given
*/

#include <stdio.h>
#include <math.h>

int main(){
  double x1, y1, x2, y2, d; // coordinates and distance
  printf("Enter the coordiantes of the first point x1 <return> y1\n");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter the coordiantes of the first point x2 <return> y2\n");
  scanf("%lf %lf", &x2, &y2);
  d = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
  printf("The distance between the 2 points : %lf\n", d);
  return 0;
}
  
