public class Solution {
    public int MinimumSum(int[] a) {
        int n = a.Length;
        int[] preMin = new int[n + 1];
        Array.Fill(preMin , int.MaxValue);
        int[] sufMin = new int [n + 1];
        Array.Fill (sufMin , int.MaxValue);
        
        for (int i = 1; i <= n; i++){
            preMin[i] = Math.Min (a[i - 1] , preMin[i - 1]);
        }


        sufMin[n] = a[n - 1];
        for (int i = n - 1; i >= 1; i--){
            sufMin[i] = Math.Min(sufMin[i + 1] , a[i - 1]);
        }

        int sum = int.MaxValue;
        for (int i = 1; i < n - 1; i++){
            if (a[i] > preMin[i + 1] && a[i] > sufMin[i + 1])
                sum = Math.Min (sum , preMin[i + 1] + a[i] + sufMin[i + 1]);
        }

        return (sum == int.MaxValue ? -1 : sum);
    }
}