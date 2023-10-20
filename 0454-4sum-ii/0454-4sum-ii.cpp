
class Solution {
public:
    
    int fourSumCount(vector<int>& a1, vector<int>& a2, vector<int>& a3, vector<int>& a4) {
        int ans {};
        map <int,int> mp;
        
        for (int i : a1){
            for (int j : a2)
                mp[i + j] ++;
        }
        
        for (int i : a3){
            for (int j : a4){
                ans += mp.count(- (i + j)) ? mp[- (i + j)] : 0;
            }
        }
        
        return ans;
    }
};