#include <stdio.h>
#include <string.h>

int stringLength(char string[]){
    unsigned int length = 0;
    while ( string[length]) {
        length++;}
    return length;
}

int main(){
    char input[127];
    
    scanf("%s", &input[0]);
    if (stringLength(input)<=127){
        printf("%d\n",stringLength(input));}
    else if(stringLength(input)>127) {
        printf("Строка слишком большая!");
    }
}