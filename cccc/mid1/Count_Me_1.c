#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


int n;
scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){

       scanf("%d",&a[i]);


    }
    int count2=0,count3=0;
    for(int i=0; i<n; i++){

       if(a[i]%2==0){
            count2++;
       }
       if(a[i]%2==1 && a[i]%3==0){
        count3++;
       }


    }
    printf("%d %d",count2,count3);






    return 0;
}
