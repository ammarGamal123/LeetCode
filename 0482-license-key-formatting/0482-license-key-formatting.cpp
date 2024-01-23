class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int cnt {};
        string ans = "";
        
        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] != '-'){
                ans.push_back(toupper(s[i]));
                cnt ++;
                
                if (cnt == k){
                    ans.push_back('-');
                    cnt = 0;
                }
            }
        }
        
        if (ans.size() > 0 && ans.back() == '-')
            ans.pop_back();
        
        reverse(ans.begin() , ans.end());
        
        return ans;
    }
};