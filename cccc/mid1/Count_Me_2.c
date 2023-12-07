

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {




     char a[100001];
     scanf("%s",&a);

     int i=0,count=0;
     while( i<strlen(a)){
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o'&& a[i]!='u' ){
             count++;
        }

        i++;
     }
printf("%d\n",count);



    return 0;
}

