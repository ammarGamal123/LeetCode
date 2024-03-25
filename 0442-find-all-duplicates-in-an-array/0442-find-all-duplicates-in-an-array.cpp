class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
                
        unordered_map <int,int> mp;
        for (auto &i : a)
            mp[i] ++;
        
        vector <int> ans;
        
        for (auto i : mp)
            if (i.second > 1) ans.emplace_back(i.first);
        
        
        return ans;
    }
};