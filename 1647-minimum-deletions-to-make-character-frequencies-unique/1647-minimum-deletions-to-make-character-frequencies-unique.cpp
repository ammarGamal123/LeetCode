class Solution {
public:
    int minDeletions(string s) {
        unordered_map <int,int> mp;
        for (auto &i : s)
            mp[i] ++;
        
        unordered_set <int> used;
        int ans {};
        
        for (auto &it : mp){
            int freq = it.second;
            while (freq > 0 && used.find(freq) != used.end()){
                -- freq;
                ans ++;
            }
            used.insert (freq);
        }
        return ans;
    }
};