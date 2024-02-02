class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {

        sort(a.begin(), a.end());
        int n = a.size();
        vector<vector<int>> ans;
        set<vector<int>> ansSet;
        for (int i = 0; i < a.size(); i++) {
            vector<int> cur;
            int target = a[i];
            int l = i + 1, r = a.size() - 1;
            while (l < r ) {
                if (a[l] + a[r] + target == 0) {

                    ansSet.insert({a[l] , a[r] , target});
                    -- r , ++ l;
                } else if (a[l] + a[r] > -target) {
                    --r;
                } else if (a[l] + a[r] < -target)
                    l++;
            }
        }
        int idx{};
        for (auto i : ansSet) {
            ans.push_back({});
            for (int j = 0; j < i.size(); j++) {
                ans[idx].push_back(i[j]);
            }
            ++idx;
        }

        return ans;
    }
};