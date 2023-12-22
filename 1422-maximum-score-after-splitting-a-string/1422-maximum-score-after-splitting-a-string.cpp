class Solution {
public:
    int maxScore(string s) {
        int cntZeros {};
        int cntOnes = count(s.begin() , s.end() , '1');
        int ans {};
        
        for (int i = 0;i < s.size() - 1; i++){
            cntZeros += s[i] == '0';
            cntOnes -= s[i] == '1';
            
            ans = max (ans , cntZeros + cntOnes);
        }
        return ans;
    }
};