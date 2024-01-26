#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
int parent[1005];
vector<int>srcComponent;
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        srcComponent.push_back(par);
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
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
    int q;
    cin>>q;
    while(q--){
            srcComponent.clear();
        int src, des;
    cin >> src >> des;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(src);
    int x = des;
    bool flag= false;
    for(auto c:srcComponent){

                if (c==x){
                    flag= true;
                }
                cout <<c<<" ";

            }
            cout <<endl;
    if (flag== true){
                        int cnt=-1;
                        vector<int> path;
                        while (x != -1)
                        {
                            path.push_back(x);
                            cnt++;
                            x = parent[x];
                        }
                        reverse(path.begin(), path.end());
                        for (int val : path)
                        {
                            cout << val << " ";
                        }
                        cout <<endl;
                        cout <<cnt<<endl;
    }
    else{
            cout <<-1<<endl;
        }

    }
    return 0;
}
