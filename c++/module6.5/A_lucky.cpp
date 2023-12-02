
#include<bits/stdc++.h>
using namespace std;

int print(int a, int b, int c){
    int r=a+b+c;


    return r;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0; i<t;i++){
    string s;
    getline(cin, s);
    int a=s[0]-'0';
    int b=s[1]-'0';
    int c=s[2]-'0';
    int d=s[3]-'0';
    int e=s[4]-'0';
    int f=s[5]-'0';
    int x =print(a,b,c);
    int y = print(d,e,f);
if(x==y){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
    return 0;
}



