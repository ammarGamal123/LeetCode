class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector <int> x(points.size());
        
        for (int i = 0;i < points.size(); i++){
            x[i] = points[i][0];
        }
        
        sort (x.begin() , x.end());
        int maxDiff {};
        
        for (int i = 1; i < x.size(); i++)
            maxDiff = max (maxDiff , x[i] - x[i - 1]);
        
        
        return maxDiff;
    }
};