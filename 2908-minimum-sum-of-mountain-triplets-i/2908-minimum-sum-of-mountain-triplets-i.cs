public class Solution {
    public int MinimumSum(int[] a) {
        int n = a.Length;
        int sum = int.MaxValue;
        
        for (int i = 0;i < n; i++){
            int cur = 0;
            for (int j = i + 1; j < n - 1; j ++){
                for (int k = n - 1; (k >= 1 && k > j && k > i); k--){
                    if (a[j] > a[i] && a[j] > a[k] && j > i && k > j){
                        sum = Math.Min (sum , a[i] + a[j] + a[k]);
                    }
                }
            }
        }
        return (sum == int.MaxValue ? -1 : sum);
    }
}