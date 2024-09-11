

#include<stdio.h>

 int tsort(){
int a[3];
int b[3];
for(int i =0; i<3;i++){
        scanf("%d",&a[i]);
        b[i]=a[i];
}
for(int i=0; i<2; i++){
            for(int j=i+1; j<3; j++){

                   if(b[i]>a[j]){
                        int tmp = b[i];
                        b[i]=b[j];
                        b[j]=tmp;
                    }

            }
        }


printf("%d\n%d\n%d\n",b[0],b[1],b[2]);
printf("\n");
printf("%d\n%d\n%d\n",a[0],a[1],a[2]);



}
int main(){

     tsort();


return 0;
}
