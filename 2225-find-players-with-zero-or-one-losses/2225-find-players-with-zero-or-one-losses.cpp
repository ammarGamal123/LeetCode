class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       set<int>all;
       map<int,int>loser;
       for (auto i : matches)
       {
           loser[i[1]]++; 
           all.insert(i[0]); 
           all.insert(i[1]); 
       }
       vector<vector<int>>ans(2); 
       for (auto i : all)
       {
           if (loser[i]==1)
               ans[1].push_back(i); 
           else if (loser[i]==0)
               ans[0].push_back(i); 
       }
       return ans; 
    }
};