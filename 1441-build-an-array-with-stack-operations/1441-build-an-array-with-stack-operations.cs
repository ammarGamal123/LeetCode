public class Solution {
    public IList<string> BuildArray(int[] target, int n) {
        int cur = 0;
        
        IList <string> ans = new List<string> ();
        for (int i = 0;i < target?.Length; i++){
            if (cur + 1 == target[i]){
                cur = target[i];
                ans.Add ("Push");
            }
            else {
                int diff = target[i] - cur;
                
                while (diff > 1){
                    ans.Add("Push");
                    ans.Add("Pop");
                    diff --;
                }
                ans.Add("Push");
                cur = target[i];
            }
        }
        
        return ans;
    }
}