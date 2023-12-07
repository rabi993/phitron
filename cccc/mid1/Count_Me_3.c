

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int t;
scanf("%d",&t);

for(int i=0; i<t; i++){


     char a[10001];
     scanf("%s",&a);

     int i=0,l=0,s=0,d=0;
     while( i<strlen(a)){
        if(a[i]>='0' && a[i]<='9'){
            d++;
        }
        else if(a[i]>='a' && a[i]<='z'){
            s++;
        }
        else if(a[i]>='A' && a[i]<='Z'){
            l++;
        }
        i++;
     }
printf("%d %d %d\n",l,s,d);


}
    return 0;
}
