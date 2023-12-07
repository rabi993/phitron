
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int a,b,c,min,max;
scanf("%d%d%d",&a,&b,&c);

    if(a>=b && c<=a ) max=a;
    if(b>=c && a<=b ) max=b;
    if(c>=b && a<=c ) max=c;

    if(b>=a && a<=c ) min=a;
    if(a>=b && b<=c ) min=b;
    if(a>=c && c<=b ) min=c;

    printf("%d %d",min,max);

    return 0;
}

