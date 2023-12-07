
#include<stdio.h>

 int count_odd(int n){

int b[n];
int count =0;
for(int i =0; i<n;i++){
        scanf("%d",&b[i]);
        if (b[i]%2==1){
                count++;
        }
}

return count;
}
int main(){
int x;
scanf("%d",&x);
   int r=  count_odd(x);
printf("%d\n",r);

return 0;
}

