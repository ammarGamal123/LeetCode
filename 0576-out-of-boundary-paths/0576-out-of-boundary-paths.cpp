class Solution {
public:
    vector<vector<vector<int>>> dp;
    int mod = 1e9 + 7;
    int m , n;
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        dp.resize(m , vector<vector<int>> (n , vector<int>(maxMove + 1 , -1)));
        this->m = m;
        this->n = n;
        return helper(startRow , startColumn , maxMove);
    }
    int helper(int i , int j , int maxMove){
        if (i >= m || j >= n || i < 0 || j < 0)
            return 1;
        
        if (maxMove <= 0) return 0;
        
        if (~dp[i][j][maxMove]) return dp[i][j][maxMove];
        
        int ans = 0;
        
        ans = (ans + helper(i + 1 , j , maxMove - 1)) % mod;
        ans = (ans + helper(i , j + 1 , maxMove - 1)) % mod;
        ans = (ans + helper(i - 1 , j , maxMove - 1)) % mod;
        ans = (ans + helper(i , j - 1 , maxMove - 1)) % mod;
        
        
        dp[i][j][maxMove] = ans;
        
        return ans;
        
        
    }
};