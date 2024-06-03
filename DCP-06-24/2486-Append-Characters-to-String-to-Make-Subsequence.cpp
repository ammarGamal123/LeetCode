class Solution {
public:
    int appendCharacters(string s, string t) {
     int cnt_t {(int)t.size()};
    for (int i = 0,j = 0;i < s.size() && j < t.size(); i++){
        if (s[i] == t[j])
            cnt_t--, j++;
    }
    return cnt_t;
    }
};