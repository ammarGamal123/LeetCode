class Solution {
public:
    int maxScore(string s) {
        int cntOnes {} , cntZeros {} , ans {};
        
        for (int i = 0;i < s.size() - 1; i++){
            cntZeros += s[i] == '0';
            for (int j = i + 1; j < s.size(); j++){
                cntOnes += s[j] == '1';
            }
            
            ans = max (ans , cntZeros + cntOnes);
            cntOnes = 0;
        }
        
        return ans;
    }
};