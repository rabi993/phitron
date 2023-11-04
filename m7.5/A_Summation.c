#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i;
     scanf("%d",&n);
     long long int a[n],sum=0;
     for(i=0; i<n;i++){
        scanf("%lld",&a[i]);
        sum +=a[i];
     }
     if(sum<0){
        printf("%lld\n",sum*(-1));
     }
     else{
        printf("%lld\n",sum);
     }
    return 0;
}


