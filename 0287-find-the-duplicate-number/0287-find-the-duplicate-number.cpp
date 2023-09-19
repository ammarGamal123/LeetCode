class Solution {
public:

    int findDuplicate(vector<int>& a) {
        int n = a.size();
        vector <int> freq(n + 2 , 0);
        
        for (auto i : a){
            if (freq[i] >= 1) return i;
            freq[i] ++;
        }
        return 0;
    }
};