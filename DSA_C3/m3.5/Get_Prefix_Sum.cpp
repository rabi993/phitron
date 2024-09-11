#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long int> v1(n);
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        v1[i]=v[i]+sum;
        sum+=v[i];
    }
    for(int i=n-1;i>=0;i--)

    {
       cout<<v1[i]<<" ";
    }

    return 0;
}
