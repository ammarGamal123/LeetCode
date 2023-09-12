class Solution {
public:

    int jump(vector<int>& a) {
        int ans = 0 , l = 0 , r = 0 , n = a.size();
        while (r < n - 1){
            int farthest = 0;
            for (int j = l; j <= r; j++){
              farthest = max (farthest , j + a[j]);
            }
            l = r + 1;
            r = farthest;
            ans += 1;
        }
        return ans;
    }
};