
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i,j,v,p;
     scanf("%d",&n);
      int A[n];
     for(i=0; i<n;i++){
        scanf("%d",&A[i]);

     }
     scanf("%d %d",&j,&v);
     i=j;
     A[i]=v;
     for(int i=n-1;i>=0;i--){
            printf("%d ",A[i]);
     }

    return 0;
}

