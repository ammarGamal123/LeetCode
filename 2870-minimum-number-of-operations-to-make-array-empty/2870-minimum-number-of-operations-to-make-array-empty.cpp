class Solution {
public:
    int minOperations(vector<int>& nums) {
     
        unordered_map <int,int> mp;
        
        for (int i : nums)
            mp[i] ++;
        
        int ans {};
        
        for (auto i : mp){
            if (i.second == 1){
                return -1;
            }
            else {
                if (i.second % 3 == 0){
                    ans += i.second / 3;
                }
                else if (i.second == 2) {
                    ans ++;
                }
                else {
                    ans += (i.second / 3) + 1;
                }
            }
        }
        
        return ans;
    }
};