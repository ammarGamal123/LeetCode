class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {

    int n = land.size() , m = land[0].size();

    vector <vector<int>> ans;

    for (int i = 0;i < n; i++){
        for (int j = 0;j < m; j++){
            if (land[i][j]){
                int x = i , y = j;

                for (x = i; x < n && land[x][j]; x ++){
                    for (y = j; y < m && land[x][y]; y++){
                        land[x][y] = 0;
                    }
                }

                ans.push_back({i , j , x - 1 , y - 1});
            }
        }
    }

    return ans;
}
};