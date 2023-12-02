#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    s=n-2;
    if(n==1){cout<<"X";}

    if(n/2>=1){
        for (int i = 1; i <= int(n/2); i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        cout << "\\";
        // Print spaces between slashes
       for(int l=1;l<=s;l++){
                cout<<" ";
       }
       s-=2;
        // Print slashes
        cout << "/";
        cout << endl;
    }
    //middle part
     // Print the X
     s+=2;
     for(int b=1; b<=int(n/2);b++){
        cout << " ";
     }
    cout << "X" << endl;
    //bottom part
    int sp=n/2;
    for (int i = 1; i <= int(n/2); i++) {
            // Print spaces
        for (int u = sp-1; u >=1 ; u--) {
            cout << " ";
        }
        sp-=1;
        cout << "/";
      // Print spaces between slashes
       for(int l=s;l>=1;l--){
                cout<<" ";
       }
       s+=2;
        // Print slashes
        cout << "\\";
        cout << endl;



    }
    }
return 0;
}
/*
     s=n-2;
        for(int i=0; i<n%2; i++){
            if(i>0){
                for(int j=1;j<=i;j++){
                cout<<" ";
            }
            }

            cout<<"\\";
            for(int l=1;l<=s;l++){
                cout<<" ";

            }
            s-=2;
            cout<<"/";


        cout<<endl;
    }
        cout<<"X";//middle
        */
