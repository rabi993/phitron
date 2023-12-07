
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int x,y,z;
    scanf("%lld %lld %lld",&x,&y,&z);
    long long int sum=0, min;


    if(x<=y && x<=z ){
            min =x;
    }
    else if(y<=x && y<=z ){
         min =y;
    }
    else{
            min=z;
    }
    x -=min;
    z -=min;
    sum += min;
    if(x==0 || z==0){
        printf("%lld",sum);
    }else if(x/2<z){
        sum += x/2;
        printf("%lld",sum);

    }else if(z<x/2){
        sum += z;
        printf("%lld",sum);

    }
    return 0;
}

