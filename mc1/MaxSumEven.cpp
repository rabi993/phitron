#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    if(n==1){
        cout<<(a[0]%2 == 0 ? a[0]:0)<<endl;

    }
    else if(n ==2 && a[0]%2 ==0 && a[1]%2 ==0) {
        cout<<a[0] +a[1] <<endl;
    }
    else if(n ==2){
        if(a[0]%2 ==0 || a[1]%2 ==0){
            cout<<(a[0]%2 == 0 ? a[0]:a[1])<<endl;
        }
        else{cout<<0<<endl;}
    }
    else{
        int mse =0;
        for(int i=n-1; i>=1; i--){
            for(int j=i-1; j>=0; j--){
                if((a[i] + a[j])%2 ==0){
                    mse = max(mse, a[i]+a[j]);
                    break;
                }
            }
            if(mse !=0) {
                break;
            }
        }
        cout<< mse<<endl;
    }

    return 0;
}
