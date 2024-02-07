#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    long long int a[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        long long int m=a[u][v];
        if( m>c){
            a[u][v]=c;
        adj[a][b] = c;
        }
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
    // cout << "AFTER" << endl;
     for (int i = 1; i <= n; i++)
     {
         for (int j = 1; j <= n; j++)
         {
             if (adj[i][j] == INT_MAX)
                 cout << "INF ";
             else
                 cout << adj[i][j] << " ";
         }
        cout << endl;
     }

     int l,m;
     cin>>l>>m;
     cout <<l<<" "<<m<<" "<< adj[l][m] << " lllllllllllllll";


    return 0;
}
