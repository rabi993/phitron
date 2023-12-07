#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int n,i;
     scanf("%d",&n);
     long long int a[n];
     for(i=0; i<n;i++){
        scanf("%lld",&a[i]);

     }
     long long int x;
     scanf("%lld",&x);
     int ans = -1;
     for(int i=0;i<n;i++){
        if(a[i]==x){
            ans= i;
            break;
        }
     }


    printf("%d\n",ans);

    return 0;
}

