
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    if(n>0){
        for(i=1;i<=n;i++){

        printf("%d ",i);


    }
    }

     if(n<=0){

        n *=-1;
        for(i=n;i>=0;i--){
            if(i==0){
                printf("%d ",i);
            }
            else {
                    printf("%d ",-i);
            }
        }


    }







    return 0;
}
