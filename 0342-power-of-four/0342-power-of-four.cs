public class Solution {
    public bool IsPowerOfFour(int n) {
        
        long cur = 1;
        
        while (cur <= n && cur < int.MaxValue){
            
            if (cur == n) return true;
            
            cur *= 4;
            
        }
        return false;
    }
}