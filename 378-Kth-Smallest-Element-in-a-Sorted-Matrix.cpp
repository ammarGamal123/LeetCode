class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();

        vector <int> need;
        for (int i = 0;i < n; i++){
            for (int j = 0; j < n; j++){
                need.emplace_back(matrix[i][j]);
            }
        }

        sort (need.begin() , need.end());

        return need[-- k];
    }
};