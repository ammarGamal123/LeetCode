class Solution {
public:
    int hIndex(vector<int>& a) {
        vector <int> freq(1002 , 0);
        for (auto i : a) freq[i] ++;

        for (int i = 1000; i >= 0; i--){
            freq[i] += freq[i + 1];
            if (freq[i] >= i)
            return i;
        }
        return 0;
    }
};