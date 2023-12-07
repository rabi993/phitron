
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int t;
scanf("%d",&t);
int n;
scanf("%d",&n);
for(int i=0; i<t; i++){



    int a[n];
    for(int i=1; i<=n; i++){

        a[i]=i;
        printf("%d ",a[i]);

    }
    printf("\n");
}


    return 0;
}
