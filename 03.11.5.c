#include <stdio.h>
int main() 
{
int n;
printf("Введите номер месяца ");
scanf("%d", &n);
switch(n){
    case 1:
    printf("Это Январь");
    break;
    case 2:
    printf("Это Февраль");
    break;
    case 3:
    printf("Это Март");
    break;
    case 4:
    printf("Это Апрель");
    break;
    case 5:
    printf("Это Май");
    break;
    case 6:
    printf("Это Июнь");
    break;
    case 7:
    printf("Это Июль");
    break;
    case 8:
    printf("Это Август");
    break;
    case 9:
    printf("Это Сентябрь");
    break;
    case 10:
    printf("Это Октябрь");
    break;
    case 11:
    printf("Это Ноябрь");
    break;
    case 12:
    printf("Это Декабрь");
    break;
    default:
    printf("Месяца с таким номером не существует или вы ввели не число");
    
}
return 0;
}
