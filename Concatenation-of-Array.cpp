1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& a) {
4        vector <int> ans(a.size() * 2);
5
6        for (int i = 0; i < a.size(); i ++){
7            ans[i] = a[i];
8            ans [i + a.size()] = a[i];
9        }
10         return ans;
11    }
12};