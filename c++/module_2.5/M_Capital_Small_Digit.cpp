#include<bits/stdc++.h>

using namespace std;

int main(){
char s;
cin>>s;
if(int(s)>=48 && int (s)<=57){
    cout<<"IS DIGIT"<<endl;
}
if(int(s)>=65 && int (s)<=90){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
}

if(int(s)>=97 && int (s)<=122){
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
}



return 0;
}



