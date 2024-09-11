#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    //test case
    for(int i=0;i<q;i++){
           int a,b;
    cin>>a>>b;

    int add=0;
    for(int i=a-1,j=b-1;i<=j;i++)
    {
        add+=v[i];
    }

       cout<<add<<endl;
    }
    return 0;
}
