#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort(a,a+n); //assending order
    //sort(a,a+3);

    sort(a,a+n,greater<int>()); //decending order
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

return 0;
}

