#include <stdio.h>
#include <string.h>
#include <stdlib.h>
const float RAND_MAX_F = RAND_MAX;
 
float get_rand() {
    return rand() / RAND_MAX_F;
}
float get_rand_range(const float min, const float max) {
    return get_rand() * (max - min) + min;
}
int main () {
int bebra[10];
int a,b;
scanf("%d",&a);
scanf("%d",&b);
for (int i=0;i<10;i++){
    int n = get_rand_range(a,b);
    bebra[i] = n;
    printf("%d ",bebra[i]);}
}
