class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map <int,int> mp;

    for (int i : nums)
        mp[i] ++;


    int size = 0 , cnt {};
    vector <vector <int>> need(mp.size());
    for (auto i : mp){
        size = max (size , i.second);
        for (int j = 0;j < i.second; j ++){
            need[cnt].push_back(i.first);
        }
        cnt ++;
    }

    vector <vector <int>> ans(size);
    for (int i = 0;i < need.size(); i++){
        vector <int> rows;
        for (int j = 0;j < need[i].size(); j++){
            ans[j].emplace_back(need[i][j]);
        }

    }

    return ans;
    }
};