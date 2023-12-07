#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i;
     scanf("%d",&n);
      int A[n];
     for(i=0; i<n;i++){
        scanf("%d",&A[i]);

     }


     for(int i=0;i<n;i++){

        if(A[i]<=10){
            printf("A[%d] = %d\n",i,A[i]);

     }
     }

    return 0;
}
