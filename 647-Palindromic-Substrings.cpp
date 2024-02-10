class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size() , ans {};

        for (int i = 0;i < n; i++){
            int even = palindromeCount(s , i , i + 1);
            int odd = palindromeCount(s , i , i);

            ans += even + odd;
        }

        return ans;
    }

    int palindromeCount(string & s , int left , int right){
        int count = 0;

        while (left >= 0 && right < s.size() && s[left] == s[right]){
            -- left , ++ right;
            count ++;
        }
        return count;
    }
};