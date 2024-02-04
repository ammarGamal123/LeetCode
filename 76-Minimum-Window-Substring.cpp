class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty() || s.length() < t.length())
            return \\;

        vector <int> freq(128 , 0);
        int cnt = t.size();

        int start = 0 , end = 0 , minLen = INT_MAX , startIndex = 0;

        for (char c : t)
            freq[c] ++;

        while (end < s.length()){
            if (freq[s[end++]] -- > 0)
                    cnt --;

            while (cnt == 0){
                if (end - start < minLen){
                    startIndex = start;
                    minLen = end - start;
                }
                if (freq[s[start++]] ++ == 0){
                    cnt ++;
                }

            }
        }

        return minLen == INT_MAX ? \\ : s.substr (startIndex , minLen);
    }
};