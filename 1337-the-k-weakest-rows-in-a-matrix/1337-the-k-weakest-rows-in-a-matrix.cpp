class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map < int,vector <int> > mp;
        for (int i = 0; i < mat.size(); i++){
            int ones {};
            int l = 0, r = mat[i].size() - 1;
            while (l <= r){
                const int mid = (l + r) / 2;
                if (mat[i][mid] == 1){
                    ones = mid + 1;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            mp[ones].emplace_back(i);
        }
        vector <int> ans;
        for (auto it : mp){
            for (int i = 0; i < it.second.size(); i++){
            if (!k) return ans;
            ans.emplace_back(it.second[i]);
            --k;
            }
        }
        return ans;
    }
};