class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        
         int rows = matrix.size();
    int cols = matrix[0].size();

    // Create a dp array to store minimum falling path sum
    vector<vector<int>> dp(rows, vector<int>(cols, 0));

    // Copy the first row of the matrix to the dp array
    for (int i = 0; i < cols; ++i) {
        dp[0][i] = matrix[0][i];
    }

    // Fill the dp array by calculating the minimum falling path sum
    for (int i = 1; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            dp[i][j] = matrix[i][j] + min({dp[i - 1][max(0, j - 1)], dp[i - 1][j], dp[i - 1][min(cols - 1, j + 1)]});
        }
    }

    // Find the minimum value in the last row of the dp array
    int result = INT_MAX;
    for (int j = 0; j < cols; ++j) {
        result = min(result, dp[rows - 1][j]);
    }

    return result;
        
    }
};