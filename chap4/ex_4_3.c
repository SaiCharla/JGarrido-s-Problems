#include <stdio.h>
#include <math.h>

int main(void){
    double r[7], p[7];
    printf("\nThe radius (m)\tPrice ($)\n");
    int j;
    float i=1;
    for (j=0;j<7;j++){
        r[j] = 5.0*i;
        p[j] = M_PI*r[j]*r[j]*1.25;
        i++;
        printf("%lf\t%lf\n", r[j], p[j]);
    }
    return 0;
}
