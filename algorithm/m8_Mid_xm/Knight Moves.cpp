#include <bits/stdc++.h>
using namespace std;

int a[105][105];
bool vis[105][105];
vector<pair<int,int>> d ={{-1, 2},{-2, 1},{-2, -1},{-1,-2},{1, -2},{2, -1},{2,1},{1,2}};
int n,m;
int cnt=1;


bool valid(int i,int j) {
    return (i>=0 && i<n && j>=0 && j<m && !vis[i][j]);
}

int dfs(int si,int sj,int cx,int dx) {
    vis[si][sj] = true;

    for(int i=0; i<8; i++) {
        int ci = si +d[i].first;
        int cj = sj +d[i].second;
        if(valid(ci,cj) ) {
            if(ci==cx && cj==dx ) {
                cout<< "YES"<<endl;
                //cout<< dis[ci][cj]<<endl;
                //cout<< cnt<<endl;

                //exit(0);
                return cnt;
            }
            cnt += a[ci][cj];
            dfs(ci,cj,cx,dx);

        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {

    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            a[i][j]=1;
        }
    }

    int p,q,c,d;
    cin>>p>>q>>c>>d;
    //memset(a,0, sizeof(a));

    memset(vis,false, sizeof(vis));
    //memset(dis,1, sizeof(dis));

    int r=dfs(p, q,c,d);
   // cout<<"-1"<<endl;
   cout<<r<<endl;

}

    return 0;
}

