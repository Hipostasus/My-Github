#include <stdio.h>
#include <math.h>
int main()
{ 
double a, b, c, D, D1, x1, x2, x;
printf("Введите a: ");
scanf("%lf", &a);
printf("Введите b: ");
scanf("%lf", &b);
printf("Введите c: ");
scanf("%lf", &c);
D = b*b - 4*a*c;
    if(D>0) 
    {
    D1=sqrt(D);
    x1= (-b- D1)/(2*a);
    x2= (-b+ D1)/(2*a);
    printf("x1 =%lf, x2 =%lf",x1 ,x2);
    }
    else if (D==0)
    {
    x= (-b)/(2*a);
    printf("x =%lf",x);
    }
    else if(D<0) printf("Корней нет");

    return 0;
}
