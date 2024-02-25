#include <bits/stdc++.h>
using namespace std;

bool reach(int c, int t){

    if(c==t) return true;
    if(c>t) return false;

    return reach(c+3,t) || reach(c*2,t);
}

int main(){
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>>n;

        if(reach(1,n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
