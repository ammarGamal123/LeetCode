class Solution {
public:
    
     
    bool hasAllCodes(string s, int k) {
        
        set <string> st;
        string cur = "";
        cur = s.substr(0 , k);
        st.insert(cur);
        for (int i = k;i < s.size(); i++){
            cur.erase(cur.begin());
            cur += s[i];
            st.insert(cur);
        }
    
        
        return st.size() == pow(2 , k);
    }
};