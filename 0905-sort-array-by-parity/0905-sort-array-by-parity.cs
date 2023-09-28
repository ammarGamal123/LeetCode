public class Solution {
    public int[] SortArrayByParity(int[] a) {
        int cnt_even = 0;
        int cnt_odd = 0;
        foreach(int i in a){
            if (i % 2 == 1) cnt_odd ++;
            else cnt_even ++;
        }
        if (cnt_even == 0 || cnt_odd == 0)
            return a;
        
        int [] odd = new int [cnt_odd];
        int [] even = new int [cnt_even];
        int [] ans = new int [a.Length];
        int cur_odd = 0 , cur_even = 0;
        for (int i = 0;i < a.Length;i++){
            if (a[i] % 2 == 1) odd[cur_odd ++] = a[i];
            else even[cur_even ++] = a[i];
        }
        int cnt = 0;
        for (int i = 0;i < even.Length; i++){
            ans[i] = even[i];
            cnt ++;
        }
        
        for (int i = 0;i < odd.Length; i++)
            ans[i + cnt] = odd[i];
        
        return ans;
    }
}