#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int i,j,n;
    scanf("%d",&n);
if(n>=10 && n<=99){
        i=n%10;
    j=n/10;

if(i%j==0 || j%i==0){
   printf("YES\n");
}
else{
    printf("NO\n");
}

    return 0;
}
}

