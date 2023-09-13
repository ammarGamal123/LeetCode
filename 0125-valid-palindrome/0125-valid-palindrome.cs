public class Solution {
    public bool IsPalindrome(string s) {
        string merge = "";
            for (int i = 0;i < s.Length; i++){
                if (s[i] >= 'a' && s[i] <= 'z')
                    merge += s[i];
                else if (s[i] >= 'A' && s[i] <= 'Z'){
                    merge += (char)(s[i] + 32);
                }
                else if (s[i] >= '0' && s[i] <= '9')
                    merge += s[i];
            }
            int n = merge.Length;
            for (int i = 0;i < merge.Length; i++){
                if (merge[i] != merge[n - i - 1])
                    return false;
            }
            return true;
    }
}