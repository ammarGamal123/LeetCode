class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
    int prefSum = 0;
    for(int i = 1;i < nums.size(); i++) {
        if (!nums[i] && !nums[i - 1])
            return true;
    }
    unordered_map <int,int> mp;
    for (int i = 0;i < nums.size(); i++){
        prefSum += nums[i];
        prefSum %= k;
        if (!prefSum && i ) return true;

        if (mp.count(prefSum)){
            if (i - mp[prefSum] > 1) return true;
        }
        else mp[prefSum] = i;
    }

    return false;
}
};