class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> st;
        int ans {};
        for (int i = 0;i < operations.size(); i++){
            if (operations[i] == "+"){
                int cur = st.top();
                st.pop();
                int prev = st.top();
                int sum= prev + cur;
                st.push(cur);
                st.push(sum);
            }
            else if (operations[i] == "D"){
                st.push(2 * st.top());
            }
            else if (operations[i] == "C"){
                if (!st.empty())
                    st.pop();
            }
            else {
                st.push(stoi(operations[i]));
            }
        }
        
        while (!st.empty())
            ans += st.top() , st.pop();
        
        return ans;
    }
};