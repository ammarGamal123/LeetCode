class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector <vector<int>> ans(2);
        
        vector <bool> vis1(100005) , vis2(100005);
        multiset <int> st2;
        set <int> st1;
        
        
        for (int i = 0;i < matches.size(); i++){
            
            int win = matches[i][0] , los = matches[i][1];
            
            st1.insert(win) , st2.insert(los);
            vis1[win] = true , vis2[los] = true;
        }
        
        for (int i = 0;i < matches.size(); i++){
            
            int win = matches[i][0] , los = matches[i][1];
            
            if (vis2[win]){
                st1.erase(win);
                vis2[win] = false;
            }
            
            if (st2.count(los) > 1){
                st2.erase(los);
            }
        }
        
        for (auto i : st1) ans[0].emplace_back(i);
        
        for (auto i : st2) ans[1].emplace_back(i);
        
        return ans;
    }
};