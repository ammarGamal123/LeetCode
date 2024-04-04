class Solution {
public:
    int maxDepth(string s) {
        stack <char> st;
        short ans = 0;
        for (int i = 0; i < s.size(); i++){
            if (st.empty()){
                if (s[i] == '(')
                    st.push(s[i]);
            }
            else if (s[i] == '(') st.push(s[i]);
            else if (st.top() == '(' && s[i] == ')'){
                short sz = st.size();
                ans = max(sz , ans);
                st.pop();
            }    
        }
        return ans;
    }
};