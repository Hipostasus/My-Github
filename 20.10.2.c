#include <stdio.h>

int main()
{   int a, b, c ;
    printf("Введите высоту коробки ");
    scanf("%d", &a);
    printf("Введите длинну коробки ");
    scanf("%d", &b);
    printf("Введите ширину коробки ");
    scanf("%d", &c);
    int x = a*b*c;
    printf("Объем коробки= %d", x);
    
    return 0;
}
