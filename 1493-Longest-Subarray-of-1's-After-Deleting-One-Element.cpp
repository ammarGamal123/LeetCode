class Solution {
public:
    int longestSubarray(vector<int>& a) {
    if (!count(a.begin() , a.end() , 1) || (count(a.begin() , a.end() , 1) == 1 && a.size() == 1)){
        return 0;
    }
    if (!count(a.begin() , a.end() , 0)){
        return a.size() - 1;
    }

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