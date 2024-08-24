class Solution {
public:
    int longestSubarray(vector<int>& a) {
    int n = a.size();
    int zeroCount {};
    int ans {};
    int l = 0 , r = 0;
    while (r < n) {
        if (!a[r]){
            ++ zeroCount;
        }

        while (zeroCount > 1){
            if (!a[l]){
                --zeroCount;
            }
            ++ l;
        }
        ans = max (ans , r - l);
        ++ r;
    }
    return ans;
}
};