#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    vector<int> v1(n);

    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }

    int t;
    cin>>t;
    vector<int> v2(t);
    for(int p=0;p<t;p++)
    {
        cin>>v2[p];
    }
    int x;
    cin>>x;
    v1.insert(v1.begin()+x,v2.begin(),v2.end());

    for(int element: v1){

        cout<<element<<" ";

    }

    return 0;
}


