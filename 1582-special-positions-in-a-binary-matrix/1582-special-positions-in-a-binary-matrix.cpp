class Solution {
public:
    
   bool check (vector<vector<int>>&mat ,
            vector<vector<int>>& revMat,
            int i , int j){
    int ones = 0;
    for (int k = 0;k < mat[i].size(); k++){
//        cout << mat[i][k] << " ";
        ones += mat[i][k];
    }
    for (int k = 0; k < revMat[j].size(); k++){
//        cout << revMat[j][k] << " ";
        ones += revMat[j][k];
    }
    return ones == 2;

//    cout << count(mat[i].begin() , mat[i].end() , 1) << endl;
//    cout << count(revMat[j].begin() , mat[j].end() , 1) << endl;
//
//    if (count(mat[i].begin() , mat[i].end() , 1))
//        return false;
//    if (count(revMat[j].begin() , mat[j].end() , 1))
//        return false;

    return true;

}
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
                ans += check (mat , revMat , i , j);
            }
        }
    }
    return ans;
}
};