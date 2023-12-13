class Solution {
public:
 
int numSpecial(vector<vector<int>>& mat) {
    int ans {};
    int n = mat.size() , m = mat[0].size();
    vector<vector<int>> revMat (m , vector <int> (n));
    for (int i = 0;i < m; i++){
        for (int j = 0;j < n; j++){
            revMat[i][j] = mat[j][i];
        }
    }
    for (int i = 0;i < mat.size(); i++){
        for (int j = 0;j < mat[i].size(); j ++){
            if (mat[i][j]){
                if (count(mat[i].begin() , mat[i].end() , 1) > 1)
                    break;
                if (count(revMat[j].begin() , revMat[j].end() , 1) > 1)
                    break;
                
                else {
                    ans ++;
                    break;
                }
            }
        }
    }
    return ans;
}
};