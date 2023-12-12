class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
      
      int sum = accumulate(wall[0].begin(), wall[0].end(), 0);
    int l = 1, r = sum - 1;
    int n = wall.size();
    map<int, int> mp;

    for (int i = 0; i < wall.size(); i++) {
        for (int j = 1; j < wall[i].size(); j++) {
            wall[i][j] += wall[i][j - 1];
        }
    
        for (int j = 0;j < wall[i].size(); j++){
            mp[wall[i][j]] ++;
        }
    }
    
    mp.erase(sum);
    

    int Max = 0;
    for (auto i : mp){
        Max = max (Max , i.second);
    }
    return n - Max;
    }
};