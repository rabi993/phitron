
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n;
    scanf("%d",&n);
    if(n<=1000 && n>=1){
       for(i=1; i<=n; i++){
        if(i%5==0){
            printf("%d Yes\n",i);
        }
        else{
                printf("%d No\n",i);
        }
    }
    }

    return 0;
}
