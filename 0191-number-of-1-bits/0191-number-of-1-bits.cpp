class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one {};
        while (n){
            one += (n % 2);
            n >>= 1;
        }
        return one;
    }
};