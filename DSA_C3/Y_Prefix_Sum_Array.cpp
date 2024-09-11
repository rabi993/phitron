#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    long long int v1[n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        v1[i]=v[i]+sum;
        sum+=v[i];
    }
    //test case
    for(int i=0;i<q;i++){
           long long int a,b;
    cin>>a>>b;
    a--;
    b--;
    long long int add;
    if(a-1<0){
             add=v1[b];
    }
    else {
             add=v1[b]-v1[a-1];
    }


       cout<<add<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
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
    //test case
    for(int i=0;i<q;i++){
           long long int a,b;
    cin>>a>>b;
    a--;
    b--;
    long long int add;
    if(a-1<0){
             add=v1[b];
    }
    else {
             add=v1[b]-v1[a-1];
    }


       cout<<add<<endl;
    }
    return 0;
}
*/
