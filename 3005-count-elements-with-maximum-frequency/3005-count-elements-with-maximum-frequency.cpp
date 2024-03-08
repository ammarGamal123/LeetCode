class Solution {
public:
    int maxFrequencyElements(vector<int>& a) {
        vector <int> freq(105);
        for (auto &i : a)
            freq[i] ++;
        
        int mxFreq = 0;
        
        for (int i = 0; i < freq.size(); i++){
            mxFreq = max (mxFreq,freq[i]);
        }
        
        int ans {};
        for (int i = 0;i < freq.size(); i++){
            if (freq[i] == mxFreq)
                ans += freq[i];
        }
        
        return ans;
    }
};