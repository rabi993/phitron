#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
bool vis[1005][1005];

vector<pair<int,int>> d ={{0,1},{0,-1},{-1,0},{1,0}};
int n,m;

bool valid(int i,int j) {
    return (i>= 0 && i<n && j>=0 && j<m && a[i][j] == '.');
}

int dfs(int si,int sj)
{
    vis[si][sj] = true;
    int cnt=1;
    for(int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] ==false)
        {
            cnt += dfs(ci,cj);
        }
    }
    return cnt;
}

int main()
{
    cin>> n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
   // int apartmentCnt =0;
    vector<int >v;
    memset(vis, false, sizeof(vis));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i][j] =='.' && !vis[i][j]) {
                int cnt=dfs(i, j);
               // apartmentCnt++;
                v.push_back(cnt);
            }
        }
    }
    //cout<< apartmentCnt<<endl;
    sort(v.begin(),v.end());

    if(v.empty()) cout << "0" << endl;

    else{
        for(int c : v) cout<< c <<" ";
        cout<<endl;
    }

    return 0;
}
