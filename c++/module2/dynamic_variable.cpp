#include<bits/stdc++.h>
using namespace std;

int* fun(){

    int *a = new int;
    cout<<"fun: "<<&a<<endl;
    cout<<"fun: "<<a<<endl;
    *a=100;
    return a;
}
int main(){

//int x = 20;

int *x = new int;
*x= 20;
cout<< *x<< endl;
cout<< x<< endl;

int *p = fun();
cout<<"main: "<<*p<<endl;

return 0;}
