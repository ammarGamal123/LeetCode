class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack <char> st;
        vector <int> idx;
        for (int i = 0;i < s.size(); i++){
            if (st.empty() && (s[i] == ')'))
                idx.emplace_back(i);
            else if (s[i] == '('){
                st.push(s[i]);
                idx.emplace_back(i);
            }
            else if (s[i] == ')' && !st.empty()){
                    st.pop() , idx.pop_back();
            }
        }  

        string ans = "";
        int cnt = 0;
        for (int i = 0;i < s.size() ;i++){
            if ( cnt < idx.size() && i == idx[cnt]){
                ++ cnt;
                continue;
            }
            ans += s[i];
        }    

        return ans;
    }
};