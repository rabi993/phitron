#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {
     int n,i,temp;
     scanf("%d",&n);
      int A[n];
     for(i=0; i<n;i++){
        scanf("%d",&A[i]);

     }
     int mn = INT_MAX;
     int mx = INT_MIN;

int posMax,posMin;
     for(int i=0;i<n;i++){
            if(A[i] < mn){
                mn =A[i];
                 posMin = i;
            }

     }
     for(int i=0;i<n;i++){
            if(A[i]> mx ){
                mx =A[i];
                posMax = i;
            }

     }
     A[posMax]=mn;
    A[posMin]=mx;

     for(int i=0; i<n;i++){
        printf("%d ",A[i]);
     }


    return 0;
}
