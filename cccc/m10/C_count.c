#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


     char a[1000001];
     scanf("%s",a);
     //int i=0;
     //if(a[i]>=48 && a[i]<=57){
        int i=0,sum=0;
     while( i<strlen(a)){

       sum +=a[i]-48;
        i++;
     }

 printf("%d",sum);


    return 0;
}

