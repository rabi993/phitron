#include<bits/stdc++.h>
using namespace std;

map<pair<int, long long>, bool> dp;

bool check(int n, long long sum, vector<int> &arr){
    // base case
    if(n == 0){
        if(sum == 0) return true;
        return false;
    }

    // return precalculated value 
    if(dp.find({n, sum}) != dp.end())
        return dp[{n, sum}];

    // calculation 
    bool negative = false;
    bool positive = check(n-1, sum - arr[n-1], arr);

    if(n != 1)
       negative = check(n-1, sum + arr[n-1], arr);

    return dp[{n, sum}] = positive || negative;
}

int main(){
    int n, sum;
    cin >> n>> sum;

    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    if(check(n, sum, v)){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}