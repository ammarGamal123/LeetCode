class Solution {
public:
    int countKeyChanges(string s) {
        for (int i = 0;i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += char (32);
    }

    int ans {};
    for (int i = 1; i < s.size(); i++){
        ans += s[i] != s[i - 1];
    }

    return ans;
    }
};