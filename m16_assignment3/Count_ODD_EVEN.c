
/*#include<stdio.h>

 int count_odd(int* a,int n){

int odd=0, even=0;

for(int i =0; i<n;i++){
        if(*a[i]%2==0){
            even++;
        }
        if(*a[i]%2==1){
            odd++;
        }


        }

printf("%d %d",odd, even);
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


#include<stdio.h>

 int odd_even(int n){

int b[n];
int odd =0,even=0;
for(int i =0; i<n;i++){
        scanf("%d",&b[i]);
        if (b[i]%2==1){
                odd++;
        }
        if (b[i]%2==0){
                even++;
        }
}

printf("%d %d\n",even,odd);
}
int main(){
int x;
scanf("%d",&x);
    odd_even(x);


return 0;
}
*/
#include<stdio.h>

 void odd_even(){
int x;
scanf("%d",&x);
int a[x];
for(int i =0; i<x;i++){
        scanf("%d",&a[i]);
}

int odd =0,even=0;
for(int i =0; i<x;i++){

        if (a[i]%2==1){
                odd++;
        }
        if (a[i]%2==0){
                even++;
        }
}

printf("%d %d\n",even,odd);
}
int main(){

    odd_even();


return 0;
}

