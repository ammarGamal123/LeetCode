class Solution {
public:
    string removeKdigits(string s, int k) {
        int n = s.size();
        stack <char> st;
        string ans = \\;

        for (char i : s){
            while (!st.empty() && k > 0 && st.top() > i){
                st.pop();
                -- k;
            }
            st.push(i);
        }
        while (k > 0 && !st.empty())
            st.pop() , --k;

        while(!st.empty()){
            ans += st.top() , st.pop();
        }

        reverse(ans.begin() , ans.end());

        // Removing leading zeros

        int pos = ans.find_first_not_of('0');
        ans = (pos == std::string::npos) ? \0\ : ans.substr(pos);


        return ans;
}
};