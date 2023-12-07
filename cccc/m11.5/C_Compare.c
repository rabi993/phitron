#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char a[21],b[21];
     scanf("%s %s",&a,&b);
     int v = strcmp(a,b);
     if(v<0){
            printf("%s",a);

     }
     else if(v>0){
         printf("%s",b);
     }
     else{
         printf("%s",a);
     }





    return 0;
}
