#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){

            int n;
            cin>>n;
            string s;
            cin>>s;
            int first=0, sec=0;
            for(char c: s){
                if(c =='(')
                    first++;
                else
                    sec++;
        }
            if(first==sec)cout<<"Possible"<<endl;
            else cout<<"Impossible"<<endl;

    }
 return 0;
}
