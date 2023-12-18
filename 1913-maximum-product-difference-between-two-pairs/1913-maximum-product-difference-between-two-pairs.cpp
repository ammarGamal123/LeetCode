class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a = 0 , b = 0 , c = 0 , d = 0;
        
        vector <int> freq (10005 );
        
        
        for (int i : nums)
            freq[i] ++;
        
        for (int i = freq.size() - 1;i >= 0; i--){
            while (freq[i] > 0){
                if (!a)
                    a = i , --freq[i];
                else if (!b && freq[i])
                    b = i;
                else break;
            }
            if (a > 0 && b > 0)
                break;
        }
        
        for (int i = 0;i < freq.size(); i++){
            while (freq[i]){
                if (!c) c = i , --freq[i];
                else if (!d && freq[i]) d = i;
                else break;
            }
            if (c > 0 && d > 0)
                break;
        }
        
        return (a * b) - (c * d);
    }
};