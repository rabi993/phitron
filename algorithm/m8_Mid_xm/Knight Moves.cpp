#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>>D ={{-1,-2},{-2,-1},{-2,1},{-1,2},{1,-2},{2,-1},{2,1},{1,2}};
bool isValid(int x,int y,int N,int M){
    return (x>=0 && x<N && y>=0 && y<M);
}

int attack(int N,int M,int p,int q,int c,int d){

    vector<vector<bool>>visited(N, vector<bool>(M, false));
    queue<pair<int,int>>qq;
    qq.push({p,q});
    visited[p][q]=true;
    int cnt=0;

    while(!qq.empty()) {
        int s =qq.size();
        for (int i=0;i<s;i++) {
            int x =qq.front().first;
            int y =qq.front().second;
            qq.pop();

            if(x==c && y==d) {
                return cnt;
            }

            for(auto De : D) {
                int X =x + De.first;
                int Y =y + De.second;

                if(isValid(X,Y,N,M) && !visited[X][Y]){
                    qq.push({X,Y});
                    visited[X][Y]= true;
                }
            }
        }
        cnt++;
    }
    return -1;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int N,M;
        cin>>N>>M;
        int p,q,c,d;
        cin>>p>>q>>c>>d;

        int result = attack(N,M,p,q,c,d);
        cout<<result<< endl;
    }

    return 0;
}
