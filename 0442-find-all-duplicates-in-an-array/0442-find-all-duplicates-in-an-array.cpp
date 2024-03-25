class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
                
         
        vector <int> ans , freq (100005);
        
        for (auto i : a)
            freq[i] ++;
        
        for (int i = 0;i < freq.size(); i++){
            if (freq[i] > 1)
                ans.emplace_back(i);
        }
        
       
        return ans;
    }
};