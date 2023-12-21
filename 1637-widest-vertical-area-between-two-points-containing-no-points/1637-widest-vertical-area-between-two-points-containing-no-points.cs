public class Solution {
    public int MaxWidthOfVerticalArea(int[][] points) {
        int n = points.Length;
        int [] x = new int [n];
        
        for (int i = 0;i < n; i++){
            x[i] = points[i][0];
        }
        
        Array.Sort (x);
        
        int maxDiff = 0;
        
        for (int i = 1; i < n; i++)
            maxDiff = Math.Max (maxDiff , x[i] - x[i - 1]);
        
        
        return maxDiff;
    }
}