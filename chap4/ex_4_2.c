#include <stdio.h>
#include <math.h>

int main(void){
    double u,v,t,h; //initial and final velocities and initial height and time
    const double g = 9.81;  //acceleration due to gravity
    printf("\nInitial velocity of the particle =");
    scanf("%lf", &u);
    printf("\nHeight of the particle=");
    scanf("%lf", &h);
    v = sqrt(u*u + 2*g*h);
    t = (v-u)/g;
    printf("\nThe final velocity of the particle= %lf\nThe time of flight= %lf\n\
", v, t);
    return 0;
}
