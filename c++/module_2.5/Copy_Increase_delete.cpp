#include<bits/stdc++.h>

using namespace std;


int main(){
int n;
cin>>n;
int *a = new int[n];
int *b = new int[n];
for(int i=0; i<n; i++){
   cin>>a[i];
b[i]=a[i];
}
   int m;
   cin>>m;
   a= new int[m];

for(int i=n; i<m; i++){
  cin>> a[i];
   b[i]=a[i];

}
delete[] a;
for(int i=0; i<m; i++){
   cout<<b[i]<<" ";
}
return 0;
}
