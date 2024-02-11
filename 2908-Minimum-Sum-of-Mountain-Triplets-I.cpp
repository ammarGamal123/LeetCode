class Solution {
public:
    int minimumSum(vector<int>& a) {
        int n = a.size();
    vector <int> preMin(n + 1 , INT_MAX);
    vector <int> sufMin(n + 1 , INT_MAX);
    for (int i = 1; i <= n; i++){
        preMin[i] = min (a[i - 1] , preMin[i - 1]);
    }


    sufMin[n] = a[n - 1];
    for (int i = n - 1; i >= 1; i--){
        sufMin[i] = min(sufMin[i + 1] , a[i - 1]);
    }

    int sum = INT_MAX;
    for (int i = 1; i < n - 1; i++){
        if (a[i] > preMin[i + 1] && a[i] > sufMin[i + 1])
            sum = min (sum , preMin[i + 1] + a[i] + sufMin[i + 1]);
    }


    return (sum == INT_MAX ? -1 : sum);
    }
};