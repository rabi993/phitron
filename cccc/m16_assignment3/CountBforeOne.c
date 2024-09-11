#include<stdio.h>

 int count_before_one(int *b,int n){


int count =0;
for(int i =0; i<n;i++){

        if (b[i]!=1){
       count++;
        }
         if (b[i]==1){
       break;
        }

}

return count;
}
int main(){
int x;
scanf("%d",&x);
int a[x];
for(int i =0; i<x;i++){
        scanf("%d",&a[i]);
}
    int r=count_before_one(&a,x);
    printf("%d\n",r);


return 0;
}
