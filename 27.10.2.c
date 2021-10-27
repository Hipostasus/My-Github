#include <stdio.h>
#include <math.h>
int main()
{ 
double a, b, c, s, p, g;
printf("Введите 1 катет: ");
scanf("%lf", &a);
printf("Введите 2 катет: ");
scanf("%lf", &b);
g = a*a+ b*b;
c = sqrt(g);
s = (a * b)/2;
p = a+b+c;
printf("Длинна гипотенузы равна %lf\n", c);
printf("Площадь треугольника равна %lf\n", s);
printf("Периметр треугольника равен %lf\n", p);
    return 0;
}
