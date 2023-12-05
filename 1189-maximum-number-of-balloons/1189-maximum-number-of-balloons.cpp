class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int ans {INT_MAX};
        
        map <char,int> mp;
        
        for (char i : text)
            mp[i] ++;
        
        short all = 0;
        for (auto i : mp){
            char cur = i.first;
            if (cur == 'b'){
                all ++;
                ans = min (ans , i.second);
            }
            else if (cur == 'a'){
                all ++;
                ans = min (ans , i.second);
            }
            else if (cur == 'l' && i.second >= 2){
                all ++;
                ans = min (ans , i.second / 2);
            }
            else if (cur == 'o' && i.second >= 2){
                all ++;
                ans = min (ans , i.second / 2);
            }
            else if (cur == 'n'){
                all ++;
                ans = min (ans , i.second);
            }
        }
        
        if (all == 5)
            return ans;
        
        return 0;
    }
};