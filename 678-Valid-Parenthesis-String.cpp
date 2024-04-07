class Solution {
public:
    bool checkValidString(string s) {
        stack<pair<char,int>> st;
    short stars{};
    priority_queue <short> pq;
    for (short i = 0; i < s.size(); i++) {
        if (s[i] == '*')
            ++stars,pq.push(i);
        else if (st.empty() && !stars && s[i] == ')')
            return false;
        else if (!st.empty() && st.top().first == '(' && s[i] == ')')
            st.pop();
        else if (stars && s[i] == ')')
            --stars , pq.pop();
        else if (s[i] == '(')
            st.push({s[i] , i});
    }
    
    if (st.empty() && pq.empty()) return true;
    else if (!st.empty() && pq.empty()) return false;
    else if (st.size() > pq.size()) return false;
    while (st.size() && pq.size()){
        if (st.top().second > pq.top())
            return false;
        else
            pq.pop() , st.pop();
    }
  //  cout << st.size() << \ \  << stars << endl;
    return true;
    }
};