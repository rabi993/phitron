#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n ;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    for(int i=0; i<n;i++){

        for(int j=0; j<n;j++){
            int  c;
            cin >> c;
            if(c==-1){
                adj[i][j] = INT_MAX;
            }
            else {
                    adj[i][j] = c;
            }
    }
    }



    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    // cout << "AFTER" << endl;


     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if (adj[i][j] == INT_MAX)
                 cout << "INF ";
             else
                 cout << adj[i][j] << " ";
         }
         cout << endl;
     }

     //max element check
     vector<int>v;

     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if (adj[i][j] != INT_MAX)
                 {
                    v.push_back(adj[i][j]);
                 }

         }

     }
     sort(v.begin(), v.end());
     cout << v.back() << endl;


    //for (int i = 0; i < n; i++)
    //{
     //   if (adj[i][i] < 0)
     //   {
     //       cout << "Cycle detected" << endl;
     //       break;
     //   }
    //}
    return 0;
}
