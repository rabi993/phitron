#include <bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d = {{0,1},{0,-1},{-1,0},{1,0}};
int n,m;

bool valid(int i,int j) {
    return (i>=0 && i<n && j>=0 && j<m && a[i][j] !='-');
}

void dfs(int si,int sj) {
    vis[si][sj]= true;

    for(int i=0; i<4; i++) {
        int ci = si+ d[i].first;
        int cj = sj+ d[i].second;
        if(valid(ci, cj) && !vis[ci][cj]) {
            if(a[ci][cj] == 'B') {
                cout << "YES"<<endl;
                exit(0);
            }
            dfs(ci,cj);
        }
    }
}

int main() {
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }
    int p,q,c,d;
    cin>>p>>q>>c>>d;
    memset(vis,false,sizeof(vis));
    if(p==c && q==d ){
        cout<< "NO"<<endl;
        return 0;
    }

    else if(a[p][q] == a[c][d]){
        a[p][q] = 'A';
        a[c][d] = 'B';

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i][j] == 'A') {
                dfs(i,j);
            }
        }
    }
    }
    else{
        cout<< "NO"<<endl;
    return 0;
    }


    cout<< "NO"<<endl;
    return 0;
}
