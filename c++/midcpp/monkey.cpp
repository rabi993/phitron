#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
        char s[1000005];
         while(cin.getline(s,1000005)){
                int n= strlen(s);




                for(int i=97; i<123;i++){

        for(int j=0;j<n;j++){
            if((int)s[j]==i){
            cout<< (char)i;
           }
        }
}




            /*    for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                        if (s[j]==' ')continue;
                        if (s[i]>s[j]){
                        swap(s[i],s[j]);
                        }
                    }
                }
            for(int j=0;j<n;j++){
                if (s[j]==' ')continue;
                else cout<<s[j];
            }*/
cout<<endl;
        }
return 0;
}








