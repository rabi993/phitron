#include<stdio.h>
int main(){
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;

    for(int i=1; i<=(2*n); i++){
        if(i<=n-1){
        for(int j=1; j<=s; j++){

            printf(" ");

        }
        for(int j=1; j<=k; j++){
                if(i%2==0){
                  printf("-");
                }
            else {
                    printf("#");
            }

        }

            s--;
            k+=2;
        }


         if(i>=n){
                for(int j=1; j<=s; j++){
            printf(" ");

        }
        for(int j=1; j<=k; j++){
              if(i%2==0){
                  printf("-");
                }
            else {
                    printf("#");
            }

        }

            s++;
            k -=2;
        }
        printf("\n");





    }




return 0;
}
