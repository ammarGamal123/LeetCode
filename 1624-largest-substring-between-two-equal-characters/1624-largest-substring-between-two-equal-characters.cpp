class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans {-1};
        vector <int> minLeft(26) , maxRight(26);
        
        for (int i = 0;i < s.size(); i++){
            if (!minLeft[s[i] - 'a']){
                minLeft[s[i] - 'a'] = i + 1;
            }
            else {
                maxRight[s[i] - 'a'] = i + 1;
            }
        }
        
        for (int i = 0; i < minLeft.size(); i++){
            if (maxRight[i] >= 1){
                ans = max (ans , maxRight[i] - minLeft[i] - 1);
            }
        }
        
        return ans;
    }
};