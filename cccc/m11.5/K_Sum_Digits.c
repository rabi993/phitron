#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

     char a[n];

     scanf("%s",a);

        int i=0,sum=0;
     while( i<strlen(a)){

       sum +=a[i]-48;
        i++;
     }

 printf("%d",sum);


    return 0;
}
