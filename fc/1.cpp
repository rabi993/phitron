#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string s;
        cin>> s;

        int cnt01=0;
        int cnt10=0;
        for(int i=0; i<n-1; i++){
            if(s[i]=='0' && s[i+1]=='1') cnt01++;
            if(s[i]=='1' && s[i+1]=='0') cnt10++;
        }

        cout<<cnt01+cnt10 <<"\n";
    }

    return 0;
}
