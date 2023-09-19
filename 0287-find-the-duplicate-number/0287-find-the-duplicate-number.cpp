class Solution {
public:

    int findDuplicate(vector<int>& a) {
        for (int i = 0;i < a.size(); i ++){
            int idx = abs (a[i]);
            
            if (a[idx] < 0) return idx;
            else
                a[idx] = - a[idx];
        }
        return 0;
    }
};