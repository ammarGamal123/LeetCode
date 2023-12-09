class Solution {
public:
    int removeAlmostEqualCharacters(string s) {
        int ans {};
        
        for (int i = 1; i < s.size(); i++){
            int fst = s[i] - 'a' , scd = s[i - 1] - 'a';
            if (s[i] == s[i - 1]){
                ans ++;
                ++ i;
            }
            else if (abs (fst - scd) == 1) ans ++ , ++ i;
            
        }
        
        return ans;
    }
};