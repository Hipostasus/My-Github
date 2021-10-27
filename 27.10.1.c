#include <stdio.h>

int main()
{ 
int a, x, y, z, s;
scanf("%d", &a);
x = a % 10;
y = a % 100/10;
z = a % 1000/100;
s = a / 1000;
printf("Сумма цифр равна%d\n", x+y+z+s );
printf("Произведение цифр равно%d\n", x*y*z*s );
    return 0;
}
