
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char a;
scanf("%c",&a);

    if(a>=97 && a<=122 )printf("ALPHA\nIS SMALL");
    if(a>=65 && a<=90 )printf("ALPHA\nIS CAPITAL");
    if(a>=48 && a<=57 )printf("IS DIGIT");
    return 0;
}
