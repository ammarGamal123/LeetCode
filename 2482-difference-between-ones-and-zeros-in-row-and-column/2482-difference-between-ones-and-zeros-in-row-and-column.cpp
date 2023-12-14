class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {int n = grid.size(), m = grid[0].size();

    vector <vector<int>> diff(n , vector<int>(m));
    vector <int> oneRow(n) , oneColumn(m);
    vector <vector<int>> rev(m , vector <int> (n));

    for (int i = 0;i < m;i ++){
        int sumOne = 0;
        for (int j = 0; j < n;j ++){
            rev[i][j] = grid[j][i];
            sumOne += rev[i][j];
        }

        oneColumn[i] = sumOne;

    }

    for (int i = 0;i < n; i++){
        oneRow[i] = count(grid[i].begin() , grid[i].end() , 1);
        int zeroRow = n - oneRow[i];

        for (int j = 0; j < m; j++){
            int zeroColumn = m - oneColumn[j];
            diff[i][j] = oneRow[i] + oneColumn[j] -
                         zeroRow - zeroColumn;
        }
    }
    return diff;
    }
};