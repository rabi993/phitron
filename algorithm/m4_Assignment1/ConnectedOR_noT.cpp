#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n >>e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
    }
    int q;
    cin>>q;
    while(q--){
    int A,B;
    cin>> A>>B;
    bool flag= false;
    for(int i=0; i<mat[A].size();i++)
    {
        if(mat[A][i]==B){
            flag= true;
            break;
        }
    }

    if(A==B){
        flag= true;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
