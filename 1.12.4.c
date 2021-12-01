#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
  
char buffer[10];
  
float n1 = rand () % 5;
float n2 = rand () % 5;
float n3 = rand () % 5;
float n4 = rand () % 5;
float n5 = rand () % 5;

float n12 = rand ();
n12 = n12/10000000000;
float n22 = rand ();
n22 = n22/10000000000;
float n32 = rand ();
n32 = n32/10000000000;
float n42 = rand ();
n42 = n42/10000000000;
float n52 = rand ();
n52 = n52/10000000000;

n1 = n1 + n12;
n2 = n2 + n22;
n3 = n3 + n32;
n4 = n4 + n42;
n5 = n5 + n52;
printf("%.10f\n",n1);
printf("%.10f\n",n2);
printf("%.10f\n",n3);
printf("%.10f\n",n4);
printf("%.10f\n",n5);
    //printf("");

}
