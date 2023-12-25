class Solution {
public:
    vector <int> dp;

    int numDecodings(string s) {
        if (s.front() == '0') return 0;
        
        dp.resize(s.size() + 1 , -1);
        
        return solve (s , 0);
    }
    int solve (string &s , int i){
        if (i >= s.size()){
            return 1;
        }
        if (dp[i] != -1) return dp[i];
        
    
        if (s[i] == '0')
            return dp[i] = 0;
    
       int ans = solve (s , i + 1);
    
        if (s[i] == '1'){
            if (i + 1 < s.size())
                ans += solve (s , i + 2);
        }
        else if (s[i] == '2'){
            if (i + 1 < s.size() && s[i + 1] <= '6')
                ans += solve (s , i + 2);
        }
        
        return dp[i] = ans;
    }
};