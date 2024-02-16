class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& nums, int k) {
        map <int,int> mp;
        for (auto i : nums){
            mp[i] ++;
        }
        vector <int> a;
        for (auto &i : mp){
            a.emplace_back(i.second);
        }
        sort (a.begin() , a.end());

        int curEle {};
        for (int i = 0; i < a.size(); i++){
            curEle += a[i];

            if (curEle > k)
                return a.size() - i;
        }
        return 0;
    }

};