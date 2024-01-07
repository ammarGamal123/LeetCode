class Solution {
public:
    bool check (string &s){
        stack <char> st;
        
        for (int i = 0;i < s.size(); i++){
            if (s[i] == '(') st.push(s[i]);
            else if (st.empty() && s[i] == ')') return false;
            else if (s[i] == ')')
                st.pop();
        }
        
        return st.empty();
    }
    void recursion(int n , string cur , vector <string> &ans){
        if (n * 2 == cur.size()){
            if (check(cur)){
                ans.emplace_back(cur);     
            }
            return; 
        }
        recursion(n , cur + '(' , ans);
        recursion(n , cur + ')' , ans);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        recursion(n , "" , ans);
        
        return ans;
    }
};