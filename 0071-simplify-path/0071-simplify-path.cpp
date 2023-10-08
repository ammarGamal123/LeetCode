class Solution {
public:
    string simplifyPath(string s) {
    vector <string> tokens;
   string token = "";
   for (int i = 0;i < s.size(); i++){
       if (s[i] == '/'){
           if (token.length() > 0){
               tokens.push_back(token);
               token = "";
           }
       }
       else token += s[i];
   }
   if (token.size() > 0){
       tokens.push_back(token);
   }
   stack <string> st;

   for (auto &i : tokens){
       if (i == ".."){
           if (!st.empty()){
               st.pop();
           }
       }
       else if (i != "."){
           st.push(i);
       }
   }
   string ans = "";
   while (!st.empty()){
       ans = '/' + st.top() + ans;
       st.pop();
   }
   if (ans == ""){
       ans += '/';
   }
   return ans;
    }
};