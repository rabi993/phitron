#include <bits/stdc++.h>
using namespace std;
bool visited[105][105];
bool isValid(int i, int j, int n,int m ){
        if(i>=0 && i<n && j>=0 && j<m && visited[i][j] == false){
                return true;
        }
return false;
}
int dfs(int x1,int y1,int tx,int ty,int n, int m){
            // Code here
            //int n = N;

            if(x1 == tx && y1 == ty) return -1;

            queue<pair<int, int>>q;
            q.push({x1, y1});
            visited[x1][y1] = true;
            int ans = 0;

            while(!q.empty()){
                    int size =q.size();
                    ans++;

                    while(size != 0){
                            pair<int, int>p = q.front();
                            q.pop();

                            int xx = p.first;
                            int yy = p.second;

                            int ax[8] = {1, 1, -1, -1, 2, -2, 2, -2};
                            int ay[8] = {2, -2, 2, -2, 1, 1, -1, -1};

                            for(int i=0; i<8; i++){
                                    int nx = xx + ax[i];
                                    int ny = yy + ay[i];

                                    if(nx==tx && ny == ty) return ans;
                                    if(isValid(nx, ny, n, m)){
                                            visited[nx][ny] = true;
                                            q.push({nx, ny});
                                    }
                            }
                            size--;
                    }
            }
return -1;
};
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int n,m;
    cin>>n>>m;
    int a[n][m];
    //bool visited[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            a[i][j]=1;
            //visited[i][j]=false;
        }
    }

    int p,q,c,d;
    cin>>p>>q>>c>>d;
 memset(visited,false, sizeof(visited));
    int r=dfs(p-1, q-1,c-1,d-1,n,m);
   // cout<<"-1"<<endl;
   cout<<r<<endl;

}

    return 0;
}
