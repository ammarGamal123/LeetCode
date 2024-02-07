class Solution {
public:
    string frequencySort(string s) {
        string ans = \\;
        unordered_map <char,int> mp;
        for (char c : s)
            mp[c] ++;

        vector <pair <int,char>> a;
        for (auto i : mp)
            a.emplace_back(i.second , i.first);

        sort (a.rbegin() , a.rend());
        for (int i = 0; i < a.size(); i++){
                for (int j = 0; j < a[i].first; j++){
                    ans += a[i].second;
                }
        }
        return ans;
    }
};