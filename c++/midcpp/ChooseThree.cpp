#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i= 0;i<t;i++) {
        int n,s;
        cin>> n>>s;
        int a[n];
        for(int j=0;j<n;j++) {
            cin>>a[j];
        }
        int flag =0;
        for(int i=0;i<n-2;i++) {
            for(int j=i+1; j<n-1;j++) {
                for(int k=j+1;k<n; k++) {
                    if(a[i]+a[j]+a[k] ==s) {
                        flag =1;
                        break;
                    }
                }
                if(flag== 1) {
                break;
                }
            }
            if(flag== 1) {
            break;
            }
        }
        if(flag== 1) {
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int n,s;
        cin>>n>>s;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        int flag=0;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=i+2;k<n;k++){
                    if(a[i]+a[j]+a[k]==s){
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag=1)cout<<"YES"<<endl;
        if(flag=0)cout<<"NO"<<endl;

    }

    return 0;
}
*/
