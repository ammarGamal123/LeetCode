class Solution {
public:
    int integerBreak(int n) {
        long long  ans = 0;
        for(int i = 2; i <= n; ++ i){
            long long cur_ans = 1;
            long long mod = n % i;
            for(int j = 1; j <= i; ++ j){
                cur_ans *= ( n / i + (mod > 0));
                -- mod;
            }
            ans = max(ans , cur_ans);
        } 
        return ans;
    }
};