
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for(int i=0; i<n; i++){
        scanf("%d", &ar[i]);

    }
    int i,j=n-1;
    while(i<j){
        int temp =ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
        i++;
        j--;
    }


    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }




    return 0;
}
