class Solution {
public:
    int countNicePairs(vector<int>& a) {
        map <int,long long> mp;
        vector <int> a2(a.size());
        for (int i = 0;i < a.size(); i++){
            string s = to_string(a[i]);
            reverse(s.begin() , s.end());
            int num = stoi(s);
            a2[i] = num;
            mp[a[i] - a2[i]] ++;
        }
        long long ans {};
        for (auto i : mp){
            if (i.second > 1){
                long long mult = (i.second * (i.second - 1)) / 2;
                ans += mult;
            }
        }
        return ans % 1000000007;
    }
};