class Solution {
public:
    bool palindromic (string &s ){
        for (int i = 0;i < s.size(); i++){
            if (s[i] != s[s.size() - i - 1])
                return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for (string i : words){
            if (palindromic(i)){
                return i;
            }
        }
        
        return "";
    }
};