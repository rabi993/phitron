#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i,sumO=0,sumE=0;
     scanf("%d",&n);
      int A[n];
     for(i=0; i<n;i++){
        scanf("%d",&A[i]);
        if(A[i]>=0) sumE +=A[i];
        if(A[i]<0) sumO +=A[i];
     }

     printf("%d %d",sumE,sumO);

    return 0;
}

