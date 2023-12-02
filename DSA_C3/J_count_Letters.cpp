#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<char> v;
        string s;
        getline(cin, s);
    for(char val: s)
    {
      // cout<<val<<" ";
       v.push_back(val);
    }
    //for(char val: v)
    //{
   //    cout<<val<<" ";

  //  }
     int cnt[26]={0};
     int i=0;
    while( v[i]!='\0' ){
            int value = v[i]-'a';
            cnt[value]++;
            i++;
    }
    int m =v.size();
    for(int va=0;va<26;va++){
   for(int i=0; i<m; i++){
       int value = va;
           if(cnt[value]!=0) {
            char p= value+97;
            cout<<p<<" "<<":"<<" "<<cnt[value]<<endl;
           }
        cnt[value]=0;
   }
    }

    return 0;
}
