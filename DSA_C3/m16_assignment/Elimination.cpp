#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n; i++){
        stack<char> st0;
        stack<char> st1;
        string s;
        cin>> s;


    for(char c:s){
        if(c =='0') {
            st0.push('0');
           // if (!st1.empty()) {
             //   st1.pop();
             //   st0.pop();
           // }
        }
        else if(c=='1'){
            st1.push('1');
            if (!st0.empty()) {
                st0.pop();
                st1.pop();
            }
        }
    }
        if(st0.empty() && st1.empty()){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
