 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   // int a[5]={10,20,30,40,50};
     //char b[5]={'a','b','d','e','c'};
     //char a[5]="rabiu";
    //char a[6]="rabiu";
    //char a[]="rabiu\0";
    char a[6]="rabiu";


     int sz = sizeof(a)/sizeof(char);
     printf("%d\n",sz);




    //for(int i=0; i<5; i++){
   //    printf("%c\n",a[i]);
   // }

   printf("%s",a);


    return 0;
}
