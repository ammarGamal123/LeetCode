class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOnes = count(s.begin() , s.end() , '1');
        if (countOnes == 1){
            sort(s.begin() , s.end());
            return s;
        }
            
        --countOnes;
        int cnt = countOnes;
        string ans = "";
        
        while (cnt --)
            ans += '1';
        
        int size = s.size() - (countOnes + 1);
        while (size --)
            ans += '0';
        
        ans += '1';
        
        return ans;
    }
};