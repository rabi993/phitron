#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int src, int des,int l)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paisi = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        // cout << par << endl;
        if(p.second==l){
            cout << p.first << " ";
        }
        if (par == des)
        {
            cout <<"des->"<< level << endl;
            paisi = true;
        }
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }

    //cout << -1 << endl;
    if (paisi == false)
    {
        cout << -1 << endl;
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, des,l;
    cin >> src>> des>>l;
    memset(vis, false, sizeof(vis));
    bfs(src, des, l);
    return 0;
}
