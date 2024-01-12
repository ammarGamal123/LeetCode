class Solution {
public:
    bool vowels (char c){
        return c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U';
    }
    bool halvesAreAlike(string s) {
       
        int cnt = 0;
        
        for (int i = 0;i < s.size(); i++){
            if (i < s.size() / 2)
                cnt += vowels(s[i]);
            else {
                cnt -= vowels(s[i]);
            }
            
        }
        
        
        return (!cnt);
    }
};