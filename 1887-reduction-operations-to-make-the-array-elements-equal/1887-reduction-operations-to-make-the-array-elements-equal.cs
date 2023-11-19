public class Solution {
    public int ReductionOperations(int[] a) {
        int Min = int.MaxValue;
        int Max = int.MinValue;
        for (int i = 0;i < a.Length; i ++){
            Min = Math.Min(Min , a[i]);
            Max = Math.Max(Max , a[i]);
        }
        int [] freq = new int [Max + 5];
        Array.Fill (freq , 0);
        
        
        foreach (int i in a)
            freq[i] ++;
        
        int count = 0 , ans = 0;
        for (int i = Max; i > Min; i--){
            if (freq[i] >= 1){
                ans += freq[i] + count;
                count += freq[i];
            }
        }
        
        return ans;
    }
}

