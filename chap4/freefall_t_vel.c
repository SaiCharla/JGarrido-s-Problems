/*
Program : Freefall_t_vel.c
Author: Sai Charla
Description: Caculats the freefall time and terminal vlocity given the initial height.
*/


#include<stdio.h>
#include<math.h>

int main(void){
  double h, t, v;    //Initial heoght, Final time and terminal velocity
  const double g = 9.81;
  printf("Enter the initial height of the object ");
  scanf("%lf", &h);
  t = sqrt(2*h/g);
  v = sqrt(2*g*h);
  printf("The freefall time is %lf s \nand the terminal velocity is %lf m/s \n", t, v);
  return 0;
}

