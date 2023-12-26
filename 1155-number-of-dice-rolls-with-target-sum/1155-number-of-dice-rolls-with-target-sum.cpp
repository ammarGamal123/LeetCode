class Solution {
public:
    long long mod = 1000000007;
    vector <vector<int>> dp;
    int answer (int t , int n , int k){
    if (!n && !t)
        return 1;
    if (n <= 0 || t <= 0)
        return 0;

    if (~dp[t][n])
        return dp[t][n];
    int ans = 0;
    for (int i = 1; i <= k; i++){
        ans += answer(t - i , n - 1, k);
        ans %= mod;
    }

    return dp[t][n] = ans;
}
    int numRollsToTarget(int n, int k, int target) {
        if (n == 1 && target > k || (n * k < target)){
            return 0;
        }
        if (target < n) return 0;
        if (n == 1 && target <= k) return 1;
        
        dp.resize(target + 1 , vector <int> (n + 1 , -1));
        
        return answer (target , n , k); 
    }
};