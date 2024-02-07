#include <bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>> d ={{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n,m;


bool valid(int i,int j) {
    return (i>=0 && i<n && j>=0 && j<m && a[i][j] != '-');
}

void dfs(int si,int sj,int cx,int dx) {
    vis[si][sj] = true;
    for(int i=0; i<4; i++) {
        int ci = si +d[i].first;
        int cj = sj +d[i].second;
        if(valid(ci,cj) && !vis[ci][cj]) {
            if(ci==cx && cj==dx ) {
                cout<< "YES"<<endl;
                exit(0);
            }
            dfs(ci,cj,cx,dx);
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    int p,q,c,d;
    cin>>p>>q>>c>>d;
    memset(vis,false, sizeof(vis));

    char x=a[p][q];
    char y=a[c][d];
if (x==y){
    dfs(p, q,c,d);
    cout<<"NO"<<endl;

}
else{
    cout<<"NO"<<endl;
}
    return 0;
}
