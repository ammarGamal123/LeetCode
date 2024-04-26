class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        // Initialize a two-dimensional array to cache the result of each sub-problem
        vector<vector<int>> memo(grid.size(), vector<int>(grid.size(), INT_MAX));

        // Fill the base case
        for (int col = 0; col < grid.size(); col++) {
            memo[grid.size() - 1][col] = grid[grid.size() - 1][col];
        }

        // Fill the recursive cases
        for (int row = grid.size() - 2; row >= 0; row--) {
            for (int col = 0; col < grid.size(); col++) {
                // Select minimum from valid cells of next row
                int nextMinimum = INT_MAX;
                for (int nextRowCol = 0; nextRowCol < grid.size(); nextRowCol++) {
                    if (nextRowCol != col) {
                        nextMinimum = min(nextMinimum, memo[row + 1][nextRowCol]);
                    }
                }

                // Minimum cost from this cell
                memo[row][col] = grid[row][col] + nextMinimum;
            }
        }

        // Find the minimum from the first row
        int answer = INT_MAX;
        for (int col = 0; col < grid.size(); col++) {
            answer = min(answer, memo[0][col]);
        }

        // Return the answer
        return answer;
    }
};