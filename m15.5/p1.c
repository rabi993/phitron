#include<stdio.h>

 int my_abs(int* a){
int flag=*a;
int result;
if(flag>=0){
    result =*a;
}
else{
    result=flag*(-1);
}






return result;

}


int main(){
int x;
scanf("%d",&x);

    int r=my_abs(&x);
printf("%d\n",r);

return 0;
}
