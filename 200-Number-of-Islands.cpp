class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty())
        return 0;

        int numIslands = 0;
        int m = grid.size() , n = grid.front().size();
        vector <pair<int,int>> dir = {{1 , 0},
                                    {-1 , 0},
                                    {0 , 1},
                                    {0 , -1}};


        queue <pair<int,int>> q;

        for (int i = 0;i < m; i++){
            for (int j = 0;j < n; j++){
                if (grid[i][j] == '1') {
                    numIslands++;
                    q.push({i, j});

                    while (!q.empty()) {
                        auto [x, y] = q.front();
                        q.pop();

                        if (x < 0 || x >= m || y < 0 || y >= n || grid[x][y] != '1') {
                            continue;
                        }

                        grid[x][y] = '0'; // mark as visited

                        for (auto& d : dir) {
                            int nx = x + d.first;
                            int ny = y + d.second;
                            if (nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == '1') {
                                q.push({nx, ny});
                            }
                        }
                    }
                }
            }
        }
        return numIslands;
}


};