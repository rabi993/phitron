#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int x=n;
    int s=n-1;
    int p=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<s; j++){
                cout<<" ";
                }
                s--;
        for(int j=0; j<x ;j++){
                cout<<"*";
                }
        for(int j=1; j<=p ;j++){
                cout<<" ";
                }
                p+=4;
        for(int j=0; j<x ; j++){
                cout<< "*";
                }
                x--;


        cout<<endl;
    }
    x++;
    s++;
    p-=4;

    int q=x+1;
    int w=s+1;
    int e=p-4;
    for(int i=1; i<n; i++){
        for(int j=0; j<w; j++){
                cout<< " ";
                }
                w++;
        for(int j=0; j<q ;j++){
                cout<< "*";
                }
        for(int j=1; j<=e ; j++){
                cout<<" ";
                }
                e-=4;
        for(int j=0; j<q ;j++){
                cout << "*";
                }
                q++;

        cout<<endl;
    }

    return 0;
}
