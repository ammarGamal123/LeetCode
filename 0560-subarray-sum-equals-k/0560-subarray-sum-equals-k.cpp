class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        
    unordered_map<int,int> mp;
    int sum = 0 , ans = 0;
    mp[sum] = 1;
    for (auto &i : a){
        sum += i;
        int find = sum - k;
        if (mp.find(find) != mp.end()){
            ans += mp[find];
        }
        mp[sum]++;
    }
    return ans;
    }
};