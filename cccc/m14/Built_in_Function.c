/*

#include<math.c>
printf
scanf

ceil()
floor
round
sqart
pow
abs()


*/
#include<stdio.h>
#include<math.h>
int main(){

   double a;
    scanf("%lf",&a);
     int b;
    scanf("%d",&b);

//int ans= ceil(a);
//int ans= floor(a);
//int ans= round(a);
//int ans= abs(a);
//int ans= sqrt(a);
double ans= pow(a,b);
printf("%0.2lf\n",ans);



return 0;
}
