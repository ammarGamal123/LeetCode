class Solution {
public:
    bool checkValidString(string s) {
        stack<pair<char,short>> st;
        short stars{};
        vector <int> idx;
        for (short i = 0; i < s.size(); i++) {
            if (s[i] == '*')
                ++stars , idx.emplace_back(i);
            else if (st.empty() && !stars && s[i] == ')')
                return false;
            else if (!st.empty() && st.top().first == '(' && s[i] == ')')
                st.pop();
            else if (stars && s[i] == ')')
                --stars , idx.pop_back();
            else if (s[i] == '(')
                st.push({s[i] , i});
        }
        
        if (st.empty() && idx.empty()) return true;
        else if (!st.empty() && idx.empty()) return false;
        else if (st.size() > idx.size()) return false;
        while (st.size() && idx.size()){
            if (st.top().second > idx.back())
                return false;
            else
                idx.pop_back() , st.pop();
        }
    //  cout << st.size() << \ \  << stars << endl;
        return true;
    }
};