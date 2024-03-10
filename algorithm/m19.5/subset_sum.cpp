class Solution{   
public:
int mod = 1e9 + 7;
    bool check_sum(int n, int sum, vector<int> &arr,   vector<vector<int>> &dp){
        // base case
        if(n == 0){
            if(sum == 0) return 1;
            return 0;
        }
        
        // return precalculated value
        if(dp[n][sum] != -1) return dp[n][sum];
        
        // calculation
        if(arr[n-1] <= sum){
            bool pick = check_sum(n-1, sum - arr[n-1], arr, dp);
            bool notPick = check_sum(n-1, sum, arr, dp);
            return dp[n][sum] = ((pick % mod) + (notPick % mod)) % mod;
        }
        else{
            bool notPick = check_sum(n-1, sum, arr, dp);
            return dp[n][sum] =  notPick;
        }
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        return check_sum(n, sum, arr, dp);
    }
};