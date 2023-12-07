
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
long long int r;
scanf("%lld",&r);

    if(x+y-z ==r || x+y*z ==r || x+y+z ==r || x-y+z ==r || x-y*z ==r || x-y-z ==r || x*y+z ==r || x*y*z ==r || x*y-z ==r ){

        printf("YES");

    }
    else{
        printf("NO");

    }
    return 0;
}

