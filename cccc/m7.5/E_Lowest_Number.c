#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {
     int n,i;
     scanf("%d",&n);
      int A[n];
     for(i=0; i<n;i++){
        scanf("%d",&A[i]);

     }
     int mn = INT_MAX, pos;
     for(int i=0;i<n;i++){
            if(A[i] < mn){
                mn =A[i];
                pos = i+1;
            }

     }
     printf("%d %d\n",mn,pos);

    return 0;
}
