public class Solution {
    public int[] FindArray(int[] pref) {
        int [] a = new int [pref.Length];
        
        a[0] = pref[0];
        for (int i = 1;i < pref?.Length; i++){
            a[i] ^= (pref[i] ^ pref[i - 1]);
        }
        return a;
    }
}