#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    long long int adj[n][n];
    long long int aa[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = 1e18;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b;
        long long int c;
        cin >> a >> b >> c;
        long long int  m=aa[a][b];
        if( m==1e18 || m>c){
            aa[a][b]=c;
            adj[a][b] = c;
        }
        //else if(m==1e18 ){
         //   aa[a][b]=c;
         //   adj[a][b] = c;
        //}
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
int t;
cin>>t;
while(t--){
        int x,y;
        cin>>x>>y;
        if(adj[x][y]==1e18){
            adj[x][y]= -1;
            cout <<adj[x][y]<< endl;
        }
        else{
            cout <<adj[x][y] << endl;
        }

}

    return 0;
}
