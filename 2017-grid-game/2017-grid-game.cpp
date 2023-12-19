class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
    int n = grid[0].size();
    long long topSum {};
    for (int i = 0;i < n; i++){
        topSum += grid[0][i];
    }
    long long ans = LONG_LONG_MAX;
    long long bottomSum = 0;
    for (int i = 0;i < n;i++){
        topSum -= grid[0][i];
        ans = min (ans , max(topSum , bottomSum));
        bottomSum += grid[1][i];
    }
    return ans;
}

};