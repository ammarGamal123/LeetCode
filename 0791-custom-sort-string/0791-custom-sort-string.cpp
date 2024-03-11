class Solution {
public:
    string customSortString(string order, string s) {
        
        
        vector <int> freq(26);
        vector <int> mpS(26);
        vector <int> mp(26);
        string ans = "";
        
        for (int i = 0;i < order.size(); i++){
            freq[order[i] - 'a'] = i + 1;
        }
        
        for (auto &i : s)
            mpS[i - 'a'] ++;
        
        
        for (auto &i : order)
            mp[i - 'a'] ++;
        
        for (int i = 0;i < order.size(); i++){
            if (mpS[order[i] - 'a'] > 0){
                while(mpS[order[i] - 'a'] > 0){
                    -- mpS[order[i] - 'a'];
                    ans += order[i];
                }
            }
        }
        
        
        for (int i = 0;i < s.size(); i++){
            if (!mp[s[i] - 'a'])
                ans.push_back(s[i]);
        }
        
        
        return ans;
    }
};