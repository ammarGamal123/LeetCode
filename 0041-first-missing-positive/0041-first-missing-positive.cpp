class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        unordered_map <int,int> mp;
        vector <int> need;
        
        for (int i = 0;i < a.size(); i++){
            if (a[i] > 0)
                mp[a[i]] ++;
        }
        for (auto i : mp)
            need.emplace_back(i.first);
        
        if (need.empty())
            return 1;
        
        sort (need.begin() , need.end());
        if (need.front() != 1)
            return 1;
        
        for (int i = 0; i < need.size() - 1; i++){
        
            if (need[i + 1] - need[i] != 1){
                return need[i] + 1;
            }
        }
        
        return need.back() + 1;
    }
};