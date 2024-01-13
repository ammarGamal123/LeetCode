class Solution {
public:
    int minSteps(string s, string t) {
        map <char,int> mpS , mpT;
        
        for (auto &i : s)
            mpS[i] ++;
        
        for (auto &i : t)
            mpT[i] ++;
        
        int ans {} , cnt {};
        for (int i = 0;i < s.size(); i++){
            if (mpT.count(s[i]))
            {
                if (mpS[s[i]] >= mpT[s[i]]){
                    ans += mpT[s[i]];
                    mpT.erase(s[i]);
                }
                else {
                    ans += mpS[s[i]];
                    mpT.erase(s[i]);
                }
                
            }
        }
       
        return s.size() - ans;
    }
};