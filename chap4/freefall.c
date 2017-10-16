/*
Program: freefall.c
Author: jgarrido
Description: print vertical position and velocity at agiven time in SI units.
*/


#include<stdio.h>

int main(void) {
  const double g = 9.81;    //accleration due to gravity
  const double Y_0 = 40.0;   // Initial height
  double y, vel, t;    // vertical position, velocity anf time
  t = 1.2;
  y = Y_0 - 0.5 * (g*t*t);
  vel = -g*t;
  printf("Vertical position at time %lf is %lf\n" t, y);
  printf("Vertical position at time %lf is %lf\n" t, vel);
  return 0;
}
