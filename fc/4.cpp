#include <iostream>
using namespace std;

int main(){
    int x;
    cin >>x;
    int s=0;
    int n=1;
    int sm=(x*2)-3;
    for(int i=0; i<x-1; i++) {
        for(int j=0; j<s; j++){
                cout<<" ";
            }
            s++;

        if(n==1)  cout<<n;
        if(n==2) cout<<n;
        if(n==0) cout<<n;

        for(int j=0; j<sm; j++){
                cout<<" ";
            }
            sm-=2;

        if(n==1) cout<<n;
        else if(n==2) cout<<n;
        else cout<<n;
        if(n==1){
            n=2;cout<<endl;
            continue;
        }
        if(n==2){
            n=0;cout<<endl;
            continue;
        }
        if(n==0){
            n++;cout<<endl;
            continue;
        }
    }
    for(int j=0; j<s; j++){
                cout<<" ";
            }
    cout<<n<<endl;
    for(int i=0; i<2;i++){
        if(n==1){
            n=2;
            break;
        }
        if(n==2){
            n=0;
            break;

        }
        if(n==0){
            n++;
            break;
        }
    }

    s--;
    sm+=2;
    for(int i=0; i<x-1; i++) {
        for(int j=0; j<s; j++){
                cout<<" ";
            }
            s--;

        if(n==1)  cout<<n;
        if(n==2) cout<<n;
        if(n==0) cout<<n;

        for(int j=0; j<sm; j++){
                cout<<" ";
            }
            sm+=2;

        if(n==1) cout<<n;
        else if(n==2) cout<<n;
        else cout<<n;
        if(n==1){
            n=2;cout<<endl;
            continue;
        }
        if(n==2){
            n=0;cout<<endl;
            continue;
        }
        if(n==0){
            n++;cout<<endl;
            continue;
        }
    }









    return 0;
}

