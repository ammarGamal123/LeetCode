class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) return 1;
        
        if (n & 1) return false;
        
        long long cur = 1;
        
        while (cur < n && cur <= INT_MAX){
            cur *= 4;
            if (cur == n) return true;
            if (cur > n) return false;
        }
        return false;
        
    }
};