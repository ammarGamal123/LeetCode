class Solution {
public:
    bool isPalindrome(string s) {
        string merge = "";
        for (int i = 0;i < s.size(); i++){
            if (s[i] >= 'a' && s[i] <= 'z')
                merge.push_back(s[i]);
            else if (s[i] >= 'A' && s[i] <= 'Z'){
                merge.push_back(s[i] + 32);
            }
            else if (s[i] >= '0' && s[i] <= '9')
                merge.push_back(s[i]);
        }
        int n = merge.size();
        for (int i = 0;i < merge.size(); i++){
            if (merge[i] != merge[n - i - 1])
                return false;
        }
        return true;
    }
};