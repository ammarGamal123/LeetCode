class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& a) {
    unordered_map <int , vector <int>> mp;
    vector <vector <int>> ans;
    for (int i = 0;i < a.size(); i++){
        int sz = a[i];
        mp[sz].emplace_back(i);

        if (mp[sz].size() == a[i]){
            ans.emplace_back(mp[sz]);
            mp[sz].clear();
        }
    }
        
        return ans;
    }
};