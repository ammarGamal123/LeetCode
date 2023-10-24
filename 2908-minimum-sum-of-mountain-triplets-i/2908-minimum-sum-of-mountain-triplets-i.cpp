class Solution {
public:
    int minimumSum(vector<int>& a) {
        int n = a.size();
        int sum = INT_MAX;
        
        for (int i = 0;i < n; i++){
            int cur = 0;
            for (int j = i + 1; j < n - 1; j ++){
                for (int k = n - 1; (k >= 1 && k > j && k > i); k--){
                    if (a[j] > a[i] && a[j] > a[k] && j > i && k > j){
                        sum = min (sum , a[i] + a[j] + a[k]);
                    }
                }
            }
        }
        return (sum == INT_MAX ? -1 : sum);
    }
};