class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        
         int rows = matrix.size();
    int cols = matrix[0].size();

    // Start the bottom-up traversal from the second-to-last row
    for (int i = rows - 2; i >= 0; --i) {
        for (int j = 0; j < cols; ++j) {
            // Update the current cell by adding the minimum value from the next row
            matrix[i][j] += min({matrix[i + 1][max(0, j - 1)], matrix[i + 1][j], matrix[i + 1][min(cols - 1, j + 1)]});
        }
    }

    // Find the minimum value in the first row, which now contains the minimum falling path sum
    int result = INT_MAX;
    for (int j = 0; j < cols; ++j) {
        result = min(result, matrix[0][j]);
    }

    return result;
        
    }
};