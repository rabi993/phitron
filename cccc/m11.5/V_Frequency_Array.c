#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int n,m;
    scanf("%d%d",&n,&m);
    if(n<=100000 && n>=1 && m<=100000 && m>=1 ){
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);

    }
int cnt[100000];
     for(int k=1; k<=m;k++){
        cnt[k] =0;
     }
    for(int i=0; i<n; i++){
            //int val = a[i];
            //cnt[val]++;
            cnt[a[i]]++;



    }


for(int i=1; i<=m; i++){
    printf("%d\n",cnt[i]);
}
    }

    return 0;
}
