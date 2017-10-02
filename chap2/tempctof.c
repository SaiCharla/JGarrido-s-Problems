/*
Program: tempctof.c
Author: jgarrido
Description: Read the value of the temperature from console, print it and convert the value to fahrenheit and print it.
*/

#include <stdio.h>

int main(void){
  double tempc; // temperature in Censius
  double tempf; // tempetature in Fahrenheit
  printf("Enter the temperatuere in Celsius:");
  scanf("%lf", &tempc);
  printf("The temperatuere in Celsius is: %lf\n", tempc);
  tempf = tempc * (9.0/5.0) + 32;
  printf("Thetemperature in Fahrenheit is: %lf\n", tempf);
  return 0;
}
