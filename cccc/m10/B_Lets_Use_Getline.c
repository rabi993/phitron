


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


     char a[1000001];
     fgets(a, 1000001, stdin);

     int i=0;
     while( a[i]!='\\'){
        printf("%c",a[i]);
        i++;
     }



    return 0;
}
