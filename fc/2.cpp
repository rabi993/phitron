#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<long long int> a(n);

    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    long long int ms=a[0]+a[1];
    cout<<ms;



    return 0;
}


