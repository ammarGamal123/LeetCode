1class Solution {
2public:
3    bool closedPara(char c) {
4    return c == '}' || c == ']' || c == ')';
5}
6bool openPara(char c) {
7    return c == '{' || c == '[' || c == '(';
8}
9bool sameType(char c, char top) {
10    return  (top == '{' && c == '}')
11         || (top == '[' && c == ']')
12         || (top == '(' && c == ')');
13
14}
15bool isValid(string s) {
16    int n = s.size();
17    stack <char> st;
18    for (int i = 0;i < n;i ++) {
19        if (st.empty() && closedPara(s[i])) {
20            return false;
21        }
22        else if (openPara(s[i]))
23            st.push(s[i]);
24        else if (closedPara(s[i])) {
25            if (sameType(s[i], st.top())) {
26                st.pop();
27            }
28            else return false;
29        }
30        else if (openPara(s[i])) {
31            st.push(s[i]);
32        }
33    }
34    return st.empty();
35}
36};