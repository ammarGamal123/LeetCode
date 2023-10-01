class Solution {
public:
    string reverseWords(string s) {
    string cur = "";
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            cur += s[i];
        } else if (s[i] == ' ' && cur != "") {
            reverse(cur.begin() , cur.end());
            ans += cur;
            cur = "";
            ans += s[i];
        }
    }
    if (cur != ""){
        reverse(cur.begin() , cur.end());
        ans += cur;
    }
    return ans;
    }
};