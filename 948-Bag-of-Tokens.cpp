class Solution {
public:
    vector<int> sortArray(vector<int>& a) {
        map <int,int> mp;
    for (auto i : a) mp[i]++;
    a.clear();
    for (auto i : mp){
        for (int j = 0; j < i.second; j ++)
            a.emplace_back(i.first);
    }
        return a;
    }
};