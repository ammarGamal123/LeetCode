class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map < int , int > mp;
        for (auto i : arr ){
            mp[i]++;
        }
        vector < int > a;
        for (auto i : mp){
            a.emplace_back(i.second);
        }
        sort (a.begin() , a.end());
        for (int i = 0;i < a.size() - 1;i ++){
            if (a[i] == a[i + 1])
                return false;
        }
        return true;
    }
};