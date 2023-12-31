class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans {-1};
        
        map <char,pair <int , int>> mp;
        
        for (int i = 0;i < s.size(); i++){
            pair <int,int> cur = mp[s[i]];
            if (mp[s[i]].first != 0 && !mp[s[i]].second){
                mp[s[i]] = {cur.first , i + 1};
            }
            else if (!mp[s[i]].first) {
                mp[s[i]] = {i + 1 , 0};
            }
            else if (mp[s[i]].first && mp[s[i]].second){
                mp[s[i]] = {cur.first , i + 1};
            }
        }
        
        for (auto i : mp){
            if (i.second.first && i.second.second){
                ans = max (ans , i.second.second - i.second.first - 1);
            }
        }
        
        return ans;
    }
};