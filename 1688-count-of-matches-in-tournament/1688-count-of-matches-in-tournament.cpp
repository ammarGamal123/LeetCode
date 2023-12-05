class Solution {
public:
    int numberOfMatches(int n) {
        int cnt {};
        
        while (n > 1){
            if (n & 1){
                cnt += (n / 2) + 1;
            }
            else cnt += n / 2;
            
            
            n /= 2;
        }
        
        return cnt;
    }
};