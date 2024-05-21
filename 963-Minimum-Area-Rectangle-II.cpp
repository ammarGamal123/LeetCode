class Solution {
public:
long long getDist(vector<int> &p1 , vector<int> &p2){
    return (p1[0] - p2[0]) * (p1[0] - p2[0]) +
           (p1[1] - p2[1]) * (p1[1] - p2[1]);
}
    double minAreaFreeRect(vector<vector<int>>& points) {
        if (points.size() < 4) return 0;

        double ans = DBL_MAX;
        int n = points.size();

        vector <vector<long long>> dis(n , vector <long long>(n , 0));

        for (int i = 0;i < n; i++){
            for (int j = 0;j < n; j++){
                dis[i][j] =
                        getDist(points[i] , points[j]);
            }
        }
        for (int i = 0;i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {
                for (int k = j + 1; k < n - 1; k++) {
                    for (int l = k + 1; l < n; l++) {
                        long long ij = dis[i][j];
                        long long ik = dis[i][k];
                        long long il = dis[i][l];
                        long long jk = dis[j][k];
                        long long jl = dis[j][l];
                        long long kl = dis[k][l];

                        if (ij + ik == il && jl == ik && kl == ij && kl + jl == jk) {
                            double area = (double) sqrt(ij) * (double) sqrt(ik);
                            ans = min(ans, area);
                        } else if (ik + il == ij && il == jk && ik == jl && jl + jk == kl) {
                            double area = (double) sqrt(ik) * (double) sqrt(il);
                            ans = min(ans, area);
                        } else if (ij + il == ik && il == jk && kl == ij && jk + kl == jl) {
                            double area = (double) sqrt(ij) * (double) sqrt(il);
                            ans = min(ans, area);
                        }
                    }
                }
            }
        }
            
            return ans == DBL_MAX ? 0 : ans;

}
};