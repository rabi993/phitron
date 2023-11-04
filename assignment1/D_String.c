#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     char a[11],b[11],temp;
     scanf("%s %s",&a,&b);
     int stL1 =strlen(a);
     int stL2 =strlen(b);
     printf("%d %d\n",stL1,stL2);
     printf("%s%s\n",a,b);

     temp=a[0];
     a[0]=b[0];
     b[0]=temp;



     printf("%s %s\n",a,b);




    return 0;
}
