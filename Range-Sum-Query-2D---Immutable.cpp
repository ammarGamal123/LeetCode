1class NumMatrix {
2public:
3    vector <vector<int>> pref;
4    NumMatrix(vector<vector<int>>& a) {
5    pref.resize(a.size() + 1, vector<int>(a.front().size() + 1));
6    int n = a.size(), m = a.front().size();
7    for (int i = 1; i <= n; ++i) {
8        for (int j = 1; j <= m; ++j) {
9            pref[i][j] = a[i - 1][j - 1] +
10                         pref[i - 1][j] +
11                         pref[i][j - 1] -
12                         pref[i - 1][j - 1];
13        }
14    }
15    }
16    
17    int sumRegion(int row1, int col1, int row2, int col2) {
18        ++ row1 , ++ row2 , ++ col1 , ++ col2;
19        
20        return pref[row2][col2] - 
21               pref[row1 - 1][col2] -
22               pref[row2][col1 - 1] +
23               pref[row1 - 1][col1 - 1];
24    }
25};
26
27/**
28 * Your NumMatrix object will be instantiated and called as such:
29 * NumMatrix* obj = new NumMatrix(matrix);
30 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
31 */