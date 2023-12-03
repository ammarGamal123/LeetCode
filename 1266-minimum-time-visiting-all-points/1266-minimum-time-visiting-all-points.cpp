class Solution {
public:
    
    int minTimeToVisitAllPoints(vector<vector<int>>& a) {
       if (a.size() == 1) return 0;
        
        
        int ans {} , n = a.size();
        for (int i = 0;i < a.size() - 1;i ++){
            int curX = a[i][0];
            int curY = a[i][1];
            
            int targetX = a[i + 1][0];
            int targetY = a[i + 1][1];
            
            ans += max (abs (targetX - curX) , abs (targetY - curY));
        }
        
        
       return ans; 
        
        
    }
};