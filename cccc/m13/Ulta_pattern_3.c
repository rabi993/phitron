#include<stdio.h>
int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
            int p=1;
        for(int j=n; j>=k; j--){

            printf("%d ",p);
            p++;


        }

        k++;
        printf("\n");
    }




return 0;
}
