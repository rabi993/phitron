#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++){

        char a[101];
     scanf("%s",&a);
     if (strlen(a)<=10){
             printf("%s\n",a);

     }

     else {
            int len =strlen(a)-2;
            int last=strlen(a)-1;
        printf("%c%d%c\n",a[0],len,a[last]);
    }

    }

    return 0;
}


