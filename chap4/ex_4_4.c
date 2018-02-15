#include <stdio.h>
#include <math.h>

double amount(double P, double r, int n);

int main(){
    double P, r;
    int n;
    printf("Enter the values of Principle, Rate of interest and no. of years\n");
    scanf("%lf%lf%d", &P, &r, &n);
    double A = amount(P, r, n);
    printf("\nThe future value of the account is %lf\n", A);
    return 0;
}

double amount(double P, double r, int n){
    double A = P*pow((1+r), n);
    return A;
}

