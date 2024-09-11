#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,h;
    cin>>t>>h;

    vector <long long int> a(t);
    for(long long int k=0;k<t;k++){

            cin>>a[k];
    }
    long long int maxi= a[0];

    for(long long int i = 1; i<t; i++){
        if (a[i] > maxi) {
            maxi = a[i];
        }
    }
if (h<1 && maxi>0){cout << "Dablu" << endl;return 0;}
    //if (h<1 && maxi>0){cout << "Hablu" << endl;return 0;}
    if (maxi==1 && h>=1){cout << "Hablu" << endl;return 0;}
    if (maxi==1 && h<1){cout << "Dablu" << endl;return 0;}
     maxi--;
long long int  sum=0;
     for(long long int i=1; i<=maxi; i++){
        sum+=i;
     }

     if(sum< h) cout << "Hablu" << endl;
     else if(sum>h) cout << "Dablu" << endl;
     else cout << "Hablu" << endl;

 return 0;
}




