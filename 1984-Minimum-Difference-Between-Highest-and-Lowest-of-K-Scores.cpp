class Solution {
public:
int minimumDifference(vector<int>& a, int k) {
    int n = a.size();
    if (k <= 1) return 0;
    int ans {INT_MAX};

    sort (a.begin() , a.end());

    int l = 0 , r = k - 1;
    while (r < n){
        ans = min (ans , a[r] - a[l]);
        l ++, r ++;
    }
    return ans;
}
};