class Solution {
public:
    int countCharacters(vector<string>& s, string chars) {
        map <char,int> mp;
        
        for (auto &i : chars){
            mp[i] ++;
        }
        
        int ans = 0;
        for (int i = 0; i < s.size(); i ++ ){
            bool flag = true;
            map <char,int> mp2;
            for (int j = 0;j < s[i].size(); j++){
                mp2[s[i][j]] ++;
            }
            for (int j = 0; j < s[i].size(); j++){
                if (mp.count(s[i][j])){
                    if (mp[s[i][j]] < mp2[s[i][j]]){
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