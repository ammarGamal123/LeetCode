class Solution {
public:
    int lengthOfLastWord(string s) {
        int lst_word {};
        int real_pos {-1};
        int n = s.size();
        for (int i = n - 1; i >= 0; i--){
            if (s[i] != ' ')
            {
                real_pos = i;
                break;
            }
                
        }
        for (int i = real_pos; i >= 0; i --){
           if (s[i] != ' ')
               lst_word ++;
            else break;    
        }
    
    return lst_word;
    }
};