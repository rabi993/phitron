
#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
char a[1005][1005];
pair<int, int> parent[1005][1005];
vector<pair<int, int>> d = {{1,0},{-1,0},{0,-1},{0, 1}};
int n, m;

bool valid(int i, int j){
    return (i >= 0 && i<n && j >= 0 && j<m && a[i][j] != '#');
}

void bfs(int si, int sj){
    queue<pair<int, int>>q;
    q.push({si,sj});
    vis[si][sj] = true;

    while(!q.empty()){
        pair<int, int> par = q.front();
        int a = par.first;
        int b = par.second;
        q.pop();

        for(int i=0; i<4; i++) {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if(valid(ci, cj) && !vis[ci][cj]){
                q.push({ci,cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {a,b};
            }
        }
    }
}

int main() {
    cin>>n>>m;
    int si= -1,sj= -1,dx= -1, dy= -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> a[i][j];

            if(a[i][j] == 'D'){
                si = i;
                sj = j;
            }
            if(a[i][j] == 'R'){
                dx = i;
                dy = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);


    if(!vis[dx][dy]){

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cout<< a[i][j];
            }
            cout<<endl;
        }
    }
    else{

        int x=dx;
        int y=dy;
        while(x != si || y != sj){
            a[x][y] = 'X';
            int temp = parent[x][y].first;
            y = parent[x][y].second;
            x = temp;
        }
        a[si][sj] = 'D';
        a[dx][dy] = 'R';

        for(int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j){
                cout<< a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}

