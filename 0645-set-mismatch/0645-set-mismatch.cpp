class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
        vector <int> ans (2);
        unordered_map <int,int> mp;
        for (auto &i : a) mp[i] ++;
        
        for (auto i: mp){
            if (i.second == 2){
                ans[0] = i.first;
                break;
            }
        }
        vector <int> perfect(a.size());
        for (int i = 0; i < a.size(); i++){
            perfect[i] = i + 1;
        }
        
        for (int i = 0; i < a.size(); i++){
            if (!mp.count(perfect[i])){
                ans[1] = perfect[i]; 
            }
        }
        
        return ans;
    }
};