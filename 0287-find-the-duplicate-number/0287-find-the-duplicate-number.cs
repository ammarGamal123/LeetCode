public class Solution {
    public int FindDuplicate(int[] a) {
        int n = a.Length;
        int [] freq = new int [n + 2];
        for (int i = 0;i < n + 2; i++){
            freq[i] = 0;
        }
        
        
        foreach (var i in a){
            if (freq[i] == 1) return i;
            freq[i] ++;
        }
        return 0;
    }
}