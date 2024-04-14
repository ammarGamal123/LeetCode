class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        sort (points.begin() , points.end());

        int prev = points[0][0];
        int ans {};
        for (int i = 1; i < points.size(); i++){
            if (points[i][0] - prev > w)
                ++ ans , prev = points[i][0]; 
        }

        return ++ ans;
    }
};