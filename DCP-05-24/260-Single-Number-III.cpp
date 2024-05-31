class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map < int , int > mp;
        for (int i = 0;i < nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<int>ret;
        for (auto i : mp){
            if (i.second != 2)
                ret.emplace_back(i.first);
        }
        return ret;
    }
};