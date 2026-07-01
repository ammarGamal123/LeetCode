1class Solution {
2public:
3   string longestCommonPrefix(vector<string>& s) {
4    if (s.size() == 1){
5        return s[0];
6    }
7    sort (s.begin() , s.end());
8    string prefix = "";
9    string ans = "";
10    bool Not_valid = false;
11    for (int i = 0;i < s.size(); i++){
12        if (!i) {
13            for (int j = 0; j < s[i].size(); j++) {
14                prefix.push_back(s[i][j]);
15            }
16        }
17        else {
18            for (int j = 0; j < s[i].size(); j ++){
19                if (prefix[j] == s[i][j]){
20                    ans.push_back(s[i][j]);
21                }
22                else {
23                    Not_valid = true;
24                    break;
25                }
26            }
27            if (i + 1 < s.size())
28                ans.clear();
29        }
30        
31    }
32    return ans;
33}
34};