class Solution {
public:
    vector<int> getConcatenation(vector<int>& a) {
        vector <int> ans(a.size() * 2);

        for (int i = 0; i < a.size(); i ++){
            ans[i] = a[i];
            ans [i + a.size()] = a[i];
        }
         return ans;
    }
};