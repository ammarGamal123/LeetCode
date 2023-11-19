class Solution {
public:
    int reductionOperations(vector<int>& a) {
        
        int Min = *min_element(a.begin() , a.end());
        int Max = *max_element (a.begin() , a.end());
        vector <int> freq (Max + 5);
        for (int i : a){
                
                freq[i] ++;
        }
        int ans = 0 , cnt {};
        for (int i = freq.size() - 1; i >= 1; i --){
            if (freq[i] >= 1 && i != Min){
                
                ans += freq[i] + cnt;
                cnt += freq[i];
            }
        }
        return ans;
    }
};