class Solution {
public:
    bool isSubsequence(string s, string t) {
       
        int cnt {};
        for (int i = 0 , j = 0;i < t.size() && j < s.size(); i++){
            if (s[j] == t[i])
                cnt ++ , j ++;
        }
        return cnt == s.size() ? true : false;
    }
};