
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i,n;
    scanf("%d",&n);

if(n>=1 && n<=10000){
    for(i=0; i<=n/2; i++){
            if(n%i==0){
            printf("i\n");
            }

    }
    printf("n\n");
}


    return 0;
}

