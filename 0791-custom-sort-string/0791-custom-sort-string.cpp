class Solution {
public:
    string customSortString(string order, string s) {
        
        
        vector <int> freq(26);
        unordered_map <char,int> mpS;
        unordered_map <char,int> mp;
        string ans = "";
        
        for (int i = 0;i < order.size(); i++){
            freq[order[i] - 'a'] = i + 1;
        }
        
        for (auto &i : s)
            mpS[i] ++;
        
        
        for (auto &i : order)
            mp[i] ++;
        
        for (int i = 0;i < order.size(); i++){
            if (mpS.count(order[i])){
                while(mpS[order[i]]){
                    -- mpS[order[i]];
                    ans += order[i];
                    if (!mpS[order[i]]) mpS.erase(order[i]);
                }
            }
        }
        
        
        for (int i = 0;i < s.size(); i++){
            if (!mp.count(s[i]))
                ans.push_back(s[i]);
        }
        
        
        return ans;
    }
};