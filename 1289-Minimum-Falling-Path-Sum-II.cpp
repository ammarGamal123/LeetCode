class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {

    for (int i = 1; i < grid.size(); i++){
        for (int j = 0; j < grid[i].size(); j++){
            int a = INT_MAX;

            for (int k = 0; k < grid[i].size(); k++){
                if (k != j)
                    a = min (grid[i - 1][k] , a);
            }
            grid[i][j] += a;
        }
    }

    int ans = INT_MAX;
    for (int i : grid[grid.size() -1])
        ans = min(ans , i);

    return ans;

    }
};