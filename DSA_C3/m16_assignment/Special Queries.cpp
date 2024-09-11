#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int s;
        string x;
        cin>> s;
        if(s==0){
            cin>>x;
            q.push(x);
        }
        else if(s==1){
                if(q.empty()){
                    cout<<"Invalid"<<endl;
                }
                else{
                    cout<<q.front()<<endl;
                    q.pop();
                }
        }
    }
    return 0;
}
