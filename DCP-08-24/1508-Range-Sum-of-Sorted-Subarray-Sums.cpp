class Solution {
public:
int mod = 1000000007; 
 int rangeSum(vector<int>& arr, int n, int left, int right) {
    vector <int> a;

    for (int i = 0;i < n; i++){
        int sum {};
        for (int j = i; j < n; j++){
            sum += arr[j];
            a.emplace_back(sum);
        }
    }

    sort (a.begin() , a.end());

    long long ans {};

    for (int i = left - 1; i < right; i++){
        ans += (a[i] % mod);
        ans %= mod;
    }

    return ans;
}
};