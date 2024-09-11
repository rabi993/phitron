#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     v.push_back(x);
    // }
    // for(int val:v)
    // {
    //     cout<<val<<" ";
    // }

    // second type
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }
    vector<int> v;
    for(int val: v2)
    {
        v.push_back(val);
    }
    for(int val: v1)
    {
        v.push_back(val);
    }
    for(int val: v)
    {
       cout<<val<<" ";
    }
    return 0;
}
