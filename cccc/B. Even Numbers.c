#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int i,n;
        scanf("%d",&n);
        if (1<=n && n<=1000){

            if(n==1){
                printf("-1\n");
            }
            else{
                for(i=2; i<=n;i++){
                    if(i%2==0){
                        printf("%d\n",i);
                    }
                }
            }
        }



    return 0;
}

