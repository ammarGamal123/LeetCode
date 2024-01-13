class Solution {
public:
    int minSteps(string s, string t) {
        vector <int> mpS(26) , mpT(26);
        
        for (auto &i : s)
            mpS[i - 'a'] ++;
        
        for (auto &i : t)
            mpT[i - 'a'] ++;
        
        int ans {} , cnt {};
        for (int i = 0;i < mpS.size(); i++){
            if (mpT[i])
            {
                if (mpS[i] >= mpT[i]){
                    ans += mpT[i];
                    mpT[i] = 0;
                }
                else {
                    ans += mpS[i];
                    mpT[i] = 0;
                }
                
            }
        }
       
        return s.size() - ans;
    }
};