class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
                
        vector <int> ans;
        map <int,int> mp;
        
        for (int i = 0;i < a.size(); i++){
            ++ mp[a[i]];
            if (mp[a[i]] > 1)
                ans.emplace_back(a[i]) , mp.erase(a[i]);
        }
        
       
        return ans;
    }
};