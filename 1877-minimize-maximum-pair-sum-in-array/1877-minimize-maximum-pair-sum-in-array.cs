public class Solution {
    public int MinPairSum(int[] a) {
        int MinSum = -1;
        Array.Sort(a);
        
        int l = 0 , r = a.Length - 1;
        while (l <= r){
            MinSum = Math.Max (MinSum , a[l ++] + a[r --]);
        }
        return MinSum;
    }
}