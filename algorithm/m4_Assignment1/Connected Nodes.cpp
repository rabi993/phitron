#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    vector<int> x;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
        x.push_back(a);
        x.push_back(b);

    }

    int q;
    cin>>q;
    while(q--){
    vector<int> v;
    int src;
    cin>> src;
    if(src<n){
            bool f=false;
            for(int c:x){
                if (c==src){
                    int k=mat[src].size();
                    for (int i = 0; i < k; i++)
                    {
                        //cout << mat[src][i] << " ";
                        v.push_back(mat[src][i]);
                        f=true;

                    }
                     break;
                }
            }

            if(f==false)cout<<-1<<endl;
    }

    else cout<< -1 <<endl;

    sort(v.begin(), v.end(),greater<int>());
    int l=v.size();

    for(int i=0; i<l; i++)
    {
            if(i==l-1){
                    cout<<v[i]<<endl;
                }
            else{
                    cout<<v[i]<<" ";
                }
    }
    }


    return 0;
}
