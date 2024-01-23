class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> st;
        
        for (int i = 0; i < logs.size(); i++){
            if (logs[i] == "../"){
                if (st.empty()) continue;
                else st.pop();
            }
            else if (logs[i] != "./"){
                st.push(logs[i]);
            }
        }
        
        return st.size();
    }
};