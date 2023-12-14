class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();

    vector <vector<int>> diff(n , vector<int>(m));
    vector <int> oneRow(n) , oneColumn(m);
    vector <int> zeroRow(n) , zeroColumn(m);
    for (int i = 0;i < n; i++){
        oneRow[i] = count(grid[i].begin() , grid[i].end() , 1);
        zeroRow[i] = count(grid[i].begin() , grid[i].end() , 0);
    }

    vector <vector<int>> rev(m , vector <int> (n));

    for (int i = 0;i < m;i ++){
        for (int j = 0; j < n;j ++){
            rev[i][j] = grid[j][i];
        }

        oneColumn[i] = count(rev[i].begin() , rev[i].end() , 1);
        zeroColumn[i] = count(rev[i].begin() , rev[i].end() , 0);

    }

    for (int i = 0;i < n; i++){
        for (int j = 0; j < m; j++){
            diff[i][j] = oneRow[i] + oneColumn[j] -
                         zeroRow[i] - zeroColumn[j];
        }
    }
    return diff;
    }
};