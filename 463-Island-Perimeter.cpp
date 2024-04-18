class Solution {
public:
    int checkEdges (int cur , vector<vector<int>>&grid,int i , int j){
        int n = grid.size() , m = grid[0].size();
        int ans = 4; 
        if (i - 1 >= 0){
            if (grid[i - 1][j]) -- ans;
        }
        if (i + 1 < n){
            if (grid[i + 1][j]) -- ans;
        }
        if (j - 1 >= 0){
            if (grid[i][j - 1]) -- ans;
        }
        if (j + 1 < m){
            if (grid[i][j + 1]) -- ans;
        }
        return ans;
}

int islandPerimeter(vector<vector<int>>& grid) {
    int n = grid.size() , m = grid[0].size();

    int ans {};

    for (int i = 0;i < n; i++){
        for (int j = 0;j < m; j++){
            if (grid[i][j])
                ans += checkEdges(grid[i][j] , grid , i , j);
        }
    }
    
    return ans;
}
};