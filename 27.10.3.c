#include <stdio.h>

int main()
{ 
for( int i = 1; i <= 6;  i++ )
{   for(int j=0; j<=i; j++)
    {
        if(j<i) 
            printf("%s", "*");
        else if (j=i)
            printf("%s\n","");
    }
}
    return 0;
}
