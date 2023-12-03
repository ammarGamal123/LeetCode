class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char,int> mp;
        map <string,int> mp2;
        
        
        
        vector <string> vs;
        string cur = "";
        for (int i = 0; i < s.size(); i++){
            if (s[i] == ' ')
                vs.emplace_back(cur) , cur = "";
            else 
                cur += s[i];
        }
        if (cur != "")
            vs.emplace_back(cur);
        
        if (vs.size() != pattern.size()) return false;
        
        
        
        
        map <char , string> mp3;
        
        for (int i = 0;i < vs.size(); i ++){
            if (!mp.count(pattern[i]) && !mp2.count(vs[i]))
                mp3[pattern[i]] = vs[i] , mp[pattern[i]] ++, mp2[vs[i]] ++;
            else if (mp.count(pattern[i]) && mp3[pattern[i]] != vs[i])
                return false;
            
            
            else if (mp.count(pattern[i]) && !mp2.count(vs[i])){
                return false;
            }
            else if (!mp.count(pattern[i]) && mp2.count(vs[i])){
                return false;
            }
        }
        return true;
    }
};