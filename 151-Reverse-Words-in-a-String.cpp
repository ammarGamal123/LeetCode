class Solution {
public:
    string reverseWords (string s){
   string ans = \\;
   vector <string> need;
   int cntWords {};
   string cur = \\;
   for (int i = 0;i < s.size(); i++){
       if (s[i] == ' ' && cur.empty())
           continue;
       else if (s[i] == ' ' && !cur.empty())
           ++ cntWords , need.push_back(cur) , cur = \\;
       else
           cur += s[i];
   }
   if (!cur.empty())
        need.push_back(cur);

   reverse(need.begin() , need.end());
   ans += need.front();

   for (int i = 1;i < need.size(); i++){
       ans += \ \;
       ans += need[i];
   }
    return ans;
}
};