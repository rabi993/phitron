#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i;
     scanf("%d",&n);
      int a[n];
     for(i=0; i<n;i++){
        scanf("%d",&a[i]);

     }


     for(int i=0;i<n;i++){
        if(a[i]==0){
             a[i]=0;

        }
        else if(a[i]>0){
            a[i]=1;

        }
        else if(a[i]<0){
            a[i]=2;

        }
        printf("%d ",a[i]);
     }




    return 0;
}

