/*
Program: areacirellipse.c
Author: saichrla
Description: Prints area and the circomference of the ellipse
*/

#include<stdio.h>
#include<math.h>

double areaellipse(double a, double b);
double cirellipse(double a, double b);

int main(){
  double x, y; // major and minor axes
  printf("Enter the major and minor axes of the ellipse major axis <return> minor axis \n");
  scanf("%lf %lf", &x, &y);
  double area = areaellipse(x, y);
  double cir = cirellipse(x, y);
  printf("The area of the ellipse = %lf \nThe circomference of the ellipse = %lf\n", area, cir);
  return 0;
}

double areaellipse(double a, double b){
  return M_PI*a*b;
}

double cirellipse(double a, double b){
  return 2*M_PI*sqrt(0.5*(pow(a, 2) + pow(b, 2)));
}
