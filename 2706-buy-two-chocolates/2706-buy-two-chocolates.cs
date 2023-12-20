public class Solution {
    public int BuyChoco(int[] a, int money) {
       Array.Sort (a);
        int origin = money;
        int cnt = 0;
        if (origin - a[0] >= 0){
            origin -= a[0] ;
            cnt ++;
        }
        if (origin - a[1] >= 0){
            origin -= a[1] ;
            cnt ++;
        }
            if (origin >= 0 && cnt == 2)
                return origin;
            else return money;
    }
}