class Solution {
public:
    int countHomogenous(string s) {
        int ans = 0;
        int currStreak = 0;
        int MOD = 1e9 + 7;
        
        for (int i = 0;i < s.size(); i++){
            if (!i || s[i] == s[i - 1]){
                currStreak ++;
            }
            else currStreak =1 ;
            
            ans %= MOD;
            ans += currStreak;
            ans %= MOD;
        }
        
        return ans;
    }
};