class Solution {
public:
    int minOperations(vector<int>& nums) {
     
        vector <int> freq (1000006);
        
        
        for (int i : nums)
            freq[i] ++;
        
        int ans {};
        
        for (int i = 0; i < freq.size(); i++){
            if (freq[i] >= 1){
            if (freq[i] == 1){
                return -1;
            }
            else {
                if (freq[i] % 3 == 0){
                    ans += freq[i] / 3;
                }
                else {
                    ans += (freq[i] / 3) + 1;
                }
            }
            }
        }
        
        return ans;
    }
};