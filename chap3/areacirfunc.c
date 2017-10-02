/*
Program: areacir.c
Author: jgarrido
Description: read the raduis and print the area and the circomference of the circle
*/

#include <stdio.h>
#include<math.h>

double areacir(double r);
double circir(double r);

int main(void){
  double r, area, cir; //radius, area, circomference
  printf("Enter the radius of the circle: \n");
  scanf("%lf", &r);
  printf("The value of the radius: %lf\n", r);
  area = areacir(r);
  cir = circir(r);
  printf("The value of area: %lf\n", area);
  printf("The value of circomference: %lf\n", cir);
  return 0;
}


double areacir(double r){
  return M_PI * pow(r, 2);
}

double circir(double r){
  return 2.0 * M_PI * r;
}
