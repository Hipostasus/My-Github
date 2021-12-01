#include <conio.h>
#include <stdio.h>
 
int factorial(int x) {
    if (x == 0){
        return 1;}
    else if(x>0) {
        int s = 1;
        for(int i=1;i<=x;i++){
            s=s*i;}
        return s;}
}
 
void main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
}