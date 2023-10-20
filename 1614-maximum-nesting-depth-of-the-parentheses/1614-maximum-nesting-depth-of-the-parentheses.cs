public class Solution {
    public int MaxDepth(string s) {
        short ans = 0;
        Stack <char> st = new Stack <char>();
        for (int i = 0;i < s.Length; i++){
            if (st.Count == 0){
                if (s[i] == '(')
                    st.Push(s[i]);
            }
            else if (s[i] == '(')
                st.Push(s[i]);
            
            else if (s[i] == ')' && st.Peek() == '('){
                short sz = (short)st.Count;
                ans = Math.Max(ans , sz);    
                st.Pop();
            }
        }
        
        return ans;
    }
}