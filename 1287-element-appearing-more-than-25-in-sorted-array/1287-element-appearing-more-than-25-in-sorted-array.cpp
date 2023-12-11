class Solution {
public:
    int findSpecialInteger(vector<int>& a) {
        if (a.size() == 1 || a.size() == 2)
            return a.back();
        int Max = INT_MIN;
        int ans = 0;
        
        int cnt = 0;
        for (int i = 1; i < a.size();i ++){
            if (a[i] == a[i - 1]){
                ++ cnt;
                if (cnt >= a.size() / 4)
                    return a[i];
            }
            else cnt = 0;
        }
        
        return ans;
    }
};