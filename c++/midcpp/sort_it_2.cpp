
#include <bits/stdc++.h>
using namespace std;

int* sort_it(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //sort(a, a + n); // ascending order
    sort(a,a+n,greater<int>()); //decending order
    return a;
}

int main() {
    int n;
    cin >> n;

    int* res = sort_it(n);

    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }

    delete[] res; // Don't forget to free the memory allocated by new

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int sort_it(int n){

         int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n); //assending order


return a;
}
int main(){
    int n;
    cin>>n;

    int res = sort_it( n)




    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


return 0;
}

*/

