#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


     char a[1001];
     gets(a);
     int ans =1;
     int i=0,j=strlen(a)-1;
     while( i<j){
            if (a[i]==a[j]){
               ans *= 1;

            }
            if (a[i]!=a[j]){
               ans *= 0;

                  printf("NO");
                  break;

            }




        i++;
        j--;
     }

    if(ans ==1){
        printf("YES");
    }

    return 0;
}

