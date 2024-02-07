#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
long long int dis[N];
int main()
{
    int n;
    long long int e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    long long int a[n][n];
//memset(a, INT_MAX, sizeof(a));
    while(e--)
    {
        long long int u,v,c;
        cin >>u>>v>>c;
long long int m=a[u][v];
        if( m>c){
            a[u][v]=c;
            EdgeList.push_back(Edge(u, v, c));
        }



    }
    for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
            cout<<i<<" "<<j<<" "<<a[i][j]<<endl;

            }}
    for(int i=1; i<=n; i++)
    {
        dis[i]= 1e18;
    }
        int t;
        cin>>t;
        while(t--){
                int s;
                cin>>s;
                dis[s] = 0;
                for(int i=1; i<n; i++)
                {
                    for(Edge ed : EdgeList)
                    {
                        long long int u, v, c;
                        u = ed.u;
                        v = ed.v;
                        c = ed.c;
                        if(dis[u] < 1e18 && dis[u]+c < dis[v])
                        {
                            dis[v] = dis[u] + c;
                        }
                    }
                }


                long long int d;
                cin>>d;

            if( dis[d]!= 1e18){
                cout <<dis[d]<<endl;
            }
            else{
                cout <<"Not Possible"<<endl;
            }

    }


    return 0;
}

