#include<bits/stdc++.h>
using namespace std;
int main()
{

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
        if(v1[i]>0){
                v1[i]=1;
                v2[i]=v1[i];
        }
        else if (v1[i]<0){
                v1[i]=2;
                v2[i]=v1[i];
        }
        else{
                v2[i]=v1[i];
        }
    }


    for(int val: v2)
    {
       cout<<val<<" ";
    }
    return 0;
}
