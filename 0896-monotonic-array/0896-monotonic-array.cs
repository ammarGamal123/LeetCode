public class Solution {
    public bool IsMonotonic(int[] a) {
        bool ok = true;
        bool ok2 = true;
        
        for (int i = 1; i < a.Length; i++){
            ok &= a[i] >= a[i - 1];
            ok2 &= a[i] <= a[i - 1];
        }
        
        return ok || ok2;
    }
}