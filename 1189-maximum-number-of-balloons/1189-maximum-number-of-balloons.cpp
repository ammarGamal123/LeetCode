class Solution {
public:
    int maxNumberOfBalloons(string text) {
         int ans {INT_MAX};
        
        vector <int> mp (26 , 0);
        
        for (char i : text)
            mp[i - 'a'] ++;
        
        short all = 0;
        for (int i = 0;i < mp.size(); i ++){
            char cur = i + 97;
            if (cur == 'b'){
                all ++;
                ans = min (ans , mp[i]);
            }
            else if (cur == 'a'){
                all ++;
                ans = min (ans , mp[i]);
            }
            else if (cur == 'l' && mp[i] >= 2){
                all ++;
                ans = min (ans , mp[i] / 2);
            }
            else if (cur == 'o' && mp[i] >= 2){
                all ++;
                ans = min (ans , mp[i] / 2);
            }
            else if (cur == 'n'){
                all ++;
                ans = min (ans , mp[i]);
            }
        }
        
        if (all == 5)
            return ans;
        
        return 0;
    }
};