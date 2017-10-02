/*
Program: tempftof.c
Author: jgarrido
Description: Read the value of the temperature from console, print it and convert the value to fahrenheit and print it.
*/

#include <stdio.h>

int main(void){
  double tempc; // temperature in Censius
  double tempf; // tempetature in Fahrenheit
  
  printf("Enter the temperatuere in Fahrenheit:");
  scanf("%lf", &tempf);
  printf("Thetemperature in Fahrenheit is: %lf\n", tempf);
  tempc = (tempf-32) * (5.0/9.0);
  printf("The temperatuere in Celsius is: %lf\n", tempc);
  return 0;
}
