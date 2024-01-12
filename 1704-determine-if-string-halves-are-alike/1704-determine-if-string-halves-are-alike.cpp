class Solution {
public:
    bool vowels (char c){
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
    }
    bool halvesAreAlike(string s) {
       
        int cnt = 0;
        
        for (int i = 0;i < s.size() / 2; i++){
            cnt += vowels(s[i]);
        }
        for (int i = s.size() / 2; i < s.size(); i++){
            cnt -= vowels(s[i]);
        }
        
        return (!cnt);
    }
};