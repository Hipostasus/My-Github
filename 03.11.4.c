#include <stdio.h>
int main() 
{
    int n, i, j, k,t;
    int a[8];
    for(i = 0 ; i < 8; i++) 
    { 
        scanf("%d", &a[i]);
    }
    for(i = 0 ; i < 7; i++) 
    { 
       for(j = 0 ; j < 7 ; j++) 
       {  
           if(a[j] > a[j+1]) 
           {           
              t = a[j];
              a[j] = a[j+1] ;
              a[j+1] = t; 
           }
        }
    }
for (k = 0;k<8;k++) {
    printf("%d ",a[k]);
}

return 0;
}
