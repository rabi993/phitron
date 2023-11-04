

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


     char a[100001];
     gets(a);

     int i=0;
     while( a[i]!='\0'){
            if (a[i]==','){
                    a[i]=' ';

            }
            else if(a[i]>=97 && a[i]<=122 ){
                a[i] -=32;
            }
            else if(a[i]>=65 && a[i]<=90 ){
                a[i] +=32;
            }
        printf("%c",a[i]);
        i++;
     }



    return 0;
}
