 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


     char a[100];
    //gets(a);
    fgets(a,19,stdin);
    a[17]='\0';


     //scanf("%s",&a);

        printf("%s\n",a );



    return 0;
}

