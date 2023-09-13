public class Solution {
    public int Candy(int[] a) {
        int n = a.Length;
        int[] left = new int[n];
        Array.Fill(left, 1);
        int [] right = new int[n];
        Array.Fill(right , 1);
        
        for (int i = 1;i < n ;i++){
            if (a[i] > a[i - 1])
                left[i] = left[i - 1] + 1;
        }
        for (int i = n - 2; i >= 0; i--){
            if (a[i] > a[i + 1]){
                right[i] = right[i + 1] + 1;
            }
        }
        int candies = 0;
        for (int i = 0;i < n;i++){
            candies += (left[i] >= right[i] ? left[i]: right[i]);
        }
        return candies;
    }
}