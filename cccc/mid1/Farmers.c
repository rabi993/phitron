

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int t;
scanf("%d",&t);
if(t<=1000 && t>0){
for(int i=0; i<t; i++){


     int m1,m2,d,result1=0,result2=0;
     scanf("%d %d %d",&m1,&m2,&d);
    if(d<=100 && d>=1 && m1<=1000 && m1>=1 && m2<=1000 && m2>=0){
        int mm=m1+m2;
     result1= d*m1;
     result2= result1/mm;
     int r=d-result2;
     printf("%d",r);

    }






}
}
    return 0;
}
