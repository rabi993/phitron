#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);

    int a, max=0;
    for(i=1;i<=n;i++){

        scanf("%d",&a);
        if (a>max){
            max=a;
        }
    }

    printf("%d\n",max);


    return 0;
}
