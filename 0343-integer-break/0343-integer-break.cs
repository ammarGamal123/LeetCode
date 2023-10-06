public class Solution {
    public int IntegerBreak(int n) {
        if (n  <= 3) return n - 1;
        
        int prod = 1;
        
        while (n > 4){
            prod *= 3;
            n -= 3;
        }
        return prod * n;
    }
}