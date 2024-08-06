class Solution {
public:
    int minimumPushes(string word) {
        int ans {};
        vector <int> freq(26);
        
        for (auto i : word){
            freq[i - 'a'] ++;
        }
        
        sort (freq.rbegin() , freq.rend());
        
        for (int i = 0;i < freq.size(); i++){
            if (freq[i]){
                ans += ((i / 8) + 1) * freq[i];
            }
        }
        
        return ans;
    }
};