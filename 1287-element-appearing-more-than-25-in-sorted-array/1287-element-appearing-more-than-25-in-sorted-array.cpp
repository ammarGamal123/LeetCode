class Solution {
public:
    int findSpecialInteger(vector<int>& a) {
        int Max = INT_MIN;
        int ans = 0;
        
        vector <int> freq (100005, 0);
        int cnt = 0;
        
        for (int i = 0;i < a.size();i++){
            freq[a[i]] ++;
        }
                 
        for (int i = 0;i < freq.size(); i ++){
            if (Max < freq[i]){
                Max = freq[i];
                ans = max (ans , i);
            }
        }
        
        return ans;
    }
};