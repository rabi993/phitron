#include<stdio.h>
int main(){
    int n,s,k;
    scanf("%d",&n);
    s=0;
    k=1;
    int p=(2*n)-1;


    for(int i=1; i<=n; i++){

        if(s>0){
            for(int j=1; j<=s; j++){
            printf(" ");

        }


        }
s++;

          int x=1;
        for(int j=p; j>=k; j--){

            printf("%d ",x);
            x++;


        }




        k+=2;
        printf("\n");
    }




return 0;
}
