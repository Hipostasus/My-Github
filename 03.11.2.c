#include <stdio.h>

int main() {
int i = 1;
int s = 0;
int n = 0;
while(n<=0) {
    printf("Введите n ");
    scanf("%d", &n);
}
for(i;i<n+1;i++) {
    s = s+i*i;
    }
printf("%d\n",s);
return 0;
}
