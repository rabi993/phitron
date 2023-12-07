#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  n;
    scanf("%d",&n);
    if(n>=0){
        if(n>1000){
        printf("I will buy Punjabi");
        if((n-1000)>=500){
        printf("\nI will buy new shoes\nAlisa will buy new shoes");
        }
        }



        else
            printf("Bad luck!");


    }
    return 0;
}
