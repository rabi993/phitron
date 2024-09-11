#include<bits/stdc++.h>

using namespace std;

int main() {


     int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n;i++){
        cin>>a[i];
     }
     int ans =1;
     int i=0,j=n-1;
     while( i<j){
            if (a[i]==a[j]){
               ans *= 1;

            }
            if (a[i]!=a[j]){
               ans *= 0;

                  cout<<"NO";
                  break;

            }

        i++;
        j--;
     }

    if(ans ==1){
        cout<<"YES";
    }

    return 0;
}

