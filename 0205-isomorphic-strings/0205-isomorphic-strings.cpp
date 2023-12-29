class Solution {
public:
  bool isIsomorphic(string s, string t) {
   int n = s.size();
        unordered_map < char , int > mp_s , mp_t;
        for (int i = 0;i < n;i++){
            if (mp_s[s[i]]){
                if (mp_s[s[i]] != t[i] )
                    return false;
            }
            if (mp_t[t[i]]){
                if (mp_t[t[i]] != s[i])
                    return false;
            }
            mp_s[s[i]] = t[i];
            mp_t[t[i]] = s[i];
        }
        return true;
}
};