class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) return true;
        
        if (n & 1 || !n) return false;
        
        return isPowerOfTwo(n / 2);
    }
};