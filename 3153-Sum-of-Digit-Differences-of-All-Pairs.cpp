class Solution {
public:
    long long sumDigitDifferences(vector<int>& a) {
        int n = a.size();
        int digitSize = to_string(a.front()).size();

        map <pair<char,int> , int> mp;

        for (int i = 0;i < a.size(); i++){
            string cur = to_string(a[i]);
            for (int j = 0;j < digitSize; j++){
                mp[{cur[j] , j}] ++;
            }
        }
        long long ans {};

        for (int i = 0;i < a.size(); i++){
            string cur = to_string(a[i]);

            for (int j = 0;j < cur.size(); j++){
                ans += a.size()  - mp[{cur[j] , j}];
            }
        }

        return ans / 2;
    }
};