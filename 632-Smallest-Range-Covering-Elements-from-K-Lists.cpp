class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& a) {
    long long k = a.size();
    long long m = a[0].size();
    vector <long> idx(k);
    vector <int> ans{-1 , INT_MAX};

    while (true) {
        // minIdx | minVal | maxVal

        long long minIdx = k , minVal = INT_MAX , maxVal = INT_MIN;

        for (int i = 0; i < k; i++) {
            // get the current value a[i][currentIndex] , currentIndex = a[i][idx[i]]
            maxVal = max(maxVal, (long long) (a[i][idx[i]]));
            

            if (a[i][idx[i]] < minVal) {
                minVal = a[i][idx[i]];
                minIdx = i;
            }
        }
        if ((long long) (maxVal - minVal) < (long long)ans[1] - ans[0]) {
            ans[0] = minVal , ans[1] = maxVal;
        }
        idx[minIdx] ++;
        if (idx[minIdx] >=  a[minIdx].size()) {
            break;
        }
    }

    return ans;
}
};