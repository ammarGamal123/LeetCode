class Solution {
public:
    vector<vector<int>> dp;
    int solve (int i , int j  , string&text1 , string&text2){
        if (i == text1.size() || j == text2.size())
            return 0;
        
        if (dp[i][j] != -1)
            return dp[i][j];
        
        if (text1[i] == text2[j])
            dp[i][j] = max (dp[i][j] , solve (i + 1 , j + 1 , text1 , text2)) + 1;
        else {
            dp[i][j] = max(dp[i][j] , solve (i + 1 , j , text1 , text2));
            dp[i][j] = max(dp[i][j] , solve (i , j + 1 , text1 , text2));
        }
                            
       return dp[i][j];
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size() , m = text2.size() , mx = max (n , m);
        dp.resize(mx + 1 , vector<int>(mx + 1 , -1));
             
        return solve (0 , 0 , text1 , text2);
    }
};