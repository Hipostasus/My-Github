#include <conio.h>
#include <stdio.h>
 
double sqr(double x) {
    double tmp = x*x*x;
    return tmp;
}
 
void main() {
    double n;
    scanf("%lf", &n);
    printf("%f", sqr(n));
}