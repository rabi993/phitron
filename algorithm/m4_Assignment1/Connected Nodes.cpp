#include <bits/stdc++.h>
using namespace std;

vector<int> v[1005];
bool vis[1005];
bool attend = false;

void bfs(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;

   vector<int>v2;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        int par = p.first;
        int level = p.second;
        // cout << par << endl;
        if(p.second==1){
                v2.push_back(par);
            //cout << par << endl;
            attend = true;
        }

        for(int child : v[par])
        {
            if(vis[child] == false)
            {
                q.push({child,level + 1});
                vis[child] = true;
            }
        }
    }

   sort(v2.begin(), v2.end(),greater<int>());
    for(int i=0; i<v2.size(); i++)
    {
   if(i==v2.size()-1){
       cout<< v2[i] <<endl;
    }
    else{
        cout<< v2[i] << " ";
        }
   }

     if(attend == false)
    {
        cout << -1 <<endl;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin>>q;
    while(q--){
    int src;
    cin>> src;
    memset(vis, false, sizeof(vis));
    bfs(src);
    }

    return 0;
}
