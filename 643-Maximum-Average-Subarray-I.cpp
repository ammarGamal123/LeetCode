class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
    int n = a.size();
    if (k == 1){
        return double (*max_element(a.begin() , a.end()));
    }
    double ans {LONG_LONG_MIN};
    int l = 0 , r = k - 1;
    double curSum {};
    for (int i = l; i <= r; i++){
        curSum += a[i];
    }
    for (int i = k; i < n; i++){
        ans = max (((curSum) / (k)) , ans);
        curSum -= a[i - k];
        curSum += a[i];
        curSum = (curSum);
    }
    ans = max (((curSum) / (k)) , ans);
    cout << fixed << setprecision(5);
    return ans;
}
};