#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int min=a[0]+a[1]+1;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
       if (min> a[i]+a[j]+j-i){
        min= a[i]+a[j]+j-i;
       };


}
}

    cout<<min<<endl;

}
return 0;
}
