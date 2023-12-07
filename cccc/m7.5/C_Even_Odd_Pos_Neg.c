
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,k,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&k);
            if(k%2==0) even +=1;
            else odd +=1;
            if(k>0) pos +=1;
            else if(k<0) neg +=1;

    }




    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

    return 0;
}
