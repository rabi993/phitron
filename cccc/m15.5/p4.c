
#include<stdio.h>

 int count_odd(int* a,int n){
*a[n-1]=100;

for(int i =0; i<n;i++){
        printf("%d ",*a[i]);

        }


}


int main(){
int x;
scanf("%d",&x);
int b[x];
for(int i =0; i<x;i++){
        scanf("%d",&b[i]);

        }
    count_odd(&b,x);


return 0;
}

