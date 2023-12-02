class Solution {
public:
    int countCharacters(vector<string>& s, string chars) {
        vector <int> freq (26 , 0);        
        for (auto &i : chars){
            freq[i - 'a'] ++;
        }
        
        int ans = 0;
        for (int i = 0; i < s.size(); i ++ ){
            bool flag = true;
            vector <int> freq2(26 , 0);
            for (int j = 0;j < s[i].size(); j++){
                freq2[s[i][j] - 'a'] ++;
            }
            for (int j = 0; j < s[i].size(); j++){
                if (freq[s[i][j] - 'a'] > 0){
                    if (freq[s[i][j] - 'a'] < freq2[s[i][j] - 'a']){
                        flag = false;
                    }
                }
                else flag = false;
            }
            if (flag) ans += s[i].size();
        }
        return ans;
    }
};