
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char a;
scanf("%c",&a);

    if(a>=97 && a<=122 )printf("%c",a-32);
    if(a>=65 && a<=90 )printf("%c",a+32);

    return 0;
}

