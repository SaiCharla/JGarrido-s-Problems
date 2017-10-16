/*
Program: areacir.c
Author: jgarrido
Description: read the raduis and print the area and the circomference of the circle
*/

#include <stdio.h>
#include<math.h>

int main(void){
  double r, area, cir; //radius, area, circomference
  printf("Enter the radius of the circle: \n");
  scanf("%lf", &r);
  printf("The value of the radius: %lf\n", r);
  area = M_PI * pow(r, 2);
  cir = 2.0 * M_PI * r;
  printf("The value of area: %lf\n", area);
  printf("The value of circomference: %lf\n", cir);
  return 0;
}
