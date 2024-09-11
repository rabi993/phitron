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
            if (!st1.empty()) {
                st1.pop();
                st0.pop();
            }
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
/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n; i++){

        string s;
        cin>> s;
        int c0= 0, c1= 0;

    for(char c:s){
        if(c =='0') {
            c0++;
        }
        else if(c=='1'){
            c1++;
        }
    }
        if(c0==c1){
                cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

string isValidString(const string& s) {
    int count_0 = 0;
    int count_1 = 0;

    for (char c : s) {
        if (c == '0') {
            if (count_1 > 0) {
                count_1--;
            } else {
                return "NO";
            }
        } else if (c == '1') {
            count_1++;
            if (count_0 > 0) {
                count_0--;
            }
        }
    }

    return (count_0 == 0 && count_1 == 0) ? "YES" : "NO";
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;
        cout << isValidString(S) << endl;
    }

    return 0;
}
*/
