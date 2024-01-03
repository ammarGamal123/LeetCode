class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
    vector <string> ans;
        
    if (s.size() <= 10) return vector <string> ();
    unordered_map <string,int> mp;
    
    for (int i = 0;i < s.size() - 9; i++){
        string cur = "";
        cur = s.substr(i , 10);
        mp[cur] ++;
        
        if (mp[cur] == 2)
            ans.emplace_back(cur);
    }
       
    return ans;
    }
};