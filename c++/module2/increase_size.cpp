#include<bits/stdc++.h>

using namespace std;


int main(){

//int a[3]={10 , 20 ,30};


int *a = new int[3];
int *b = new int[3];


//delete a;

for(int i=0; i<3; i++){
   cin>>a[i];
   b[i]=a[i];
}
   delete[] a;
   a= new int[5];
for(int i=0; i<5; i++){
   cout<<a[i]<<endl;
}
delete[] a;
for(int i=0; i<5; i++){
   cout<<b[i]<<endl;
}
return 0;
}
