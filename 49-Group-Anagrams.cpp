class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;
        for (int i = 0; i < s.size(); i++) {
            string str = s[i];
            sort(s[i].begin(), s[i].end());
            mp[s[i]].push_back(str);
        }
        for (auto i : mp) {
            ans.emplace_back(i.second);
        }
        return ans;
    }
};