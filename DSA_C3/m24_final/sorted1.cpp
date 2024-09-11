#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    set<int> a;
    for(int i= 0; i<t; i++) {
        a.clear();

        int c;
        cin>> c;

        for(int j=0; j<c; j++) {
            int x;
            cin>> x;
            a.insert(x);
        }

        for(auto it=a.begin(); it !=a.end(); it++) {
            cout<< *it <<" ";
        }

        cout<<endl;
    }
    return 0;
}
