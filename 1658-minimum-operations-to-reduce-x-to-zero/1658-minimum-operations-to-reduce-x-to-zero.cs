public class Solution {
    public int MinOperations(int[] a, int x) {
        int n = a.Length;
        int [] pref = new int [n + 1];
        int [] suf = new int [n + 1];
        
        for (int i = 0;i <= n; i++){
            pref[i] = 0;
            suf[i] = 0;
        }
        for (int i = 1; i <= n; i ++){
            pref[i] += pref[i - 1] + a[i - 1];
        }
        for (int i = n - 1; i >= 0; i--){
            suf[n - i] += suf[n - i - 1] + a[i];
        }
        
        int ans = 10000000;
        for (int i = 0;i <= n; i ++){
            int l = 0;
            int r = n;
            while (l <= r){
                int mid = (l + r) / 2;
                
                if (pref[i] + suf[mid] == x && i + mid <= n){
                    ans = Math.Min (ans , i + mid);
                    r = mid - 1;
                }
                else if (pref[i] + suf[mid] > x)
                    r = mid - 1;
                else l = mid + 1;
            }
        }
        return (ans == 10000000 ? -1 : ans);
    
    }
}