#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);

    int a;
    for(i=1;i<=n;i++){

        scanf("%d",&a);
        do
        {
            printf("%d ",a%10);
            a=a/10;
        }
        while(a!=0);
        printf("\n");
    }




    return 0;
}

