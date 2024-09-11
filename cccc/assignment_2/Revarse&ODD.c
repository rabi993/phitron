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
     for(int i=n-1;i>=0;i--){
            if(i%2==1)printf("%d ",A[i]);
     }

    return 0;
}
