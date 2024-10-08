class Solution {
public:
    int minSwaps(string s) {
    int open = 0 , ans = 0;
    for (int i = 0; i < s.size();i++){
        if (s[i] == ']'){
            if (open) open --;
            else {
                open ++;
                ans ++;
            }
        }
        else open ++;
    }
        return ans;       
    }
};