#include <stdio.h>

int main()
{   int password, truepassword;
    printf("Введите пароль ");
    scanf("%d", &password);
    printf("Введите пароль снова ");
    scanf("%d", &truepassword);
    password == truepassword ? printf("Пароль верный") : printf("Пароль неверный");
    return 0;
}
