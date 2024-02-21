class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans {};

        while (left != right){
            left >>= 1;
            right >>= 1;
            ans ++;
        }

        return (left << ans);
    }
}; 