1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& s) {
4        vector<vector<string>> ans;
5        map<string, vector<string>> mp;
6        for (int i = 0; i < s.size(); i++) {
7            string str = s[i];
8            sort(s[i].begin(), s[i].end());
9            mp[s[i]].push_back(str);
10        }
11        for (auto i : mp) {
12            ans.emplace_back(i.second);
13        }
14        return ans;
15    }
16};