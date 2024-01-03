class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
    set <string> ans;
        
    if (s.size() < 10) return vector <string> ();
    map <string,int> mp;
    string cur = "";
    for (int i = 0;i < s.size() - 9; i++){
       // cout << s.substr(i , i + 10) << endl;
        cur = s.substr(i , 10);
        if (mp.count(cur)){
            ans.insert(cur);
            
        }
        else mp[cur] ++;

    }
     vector <string> res;
        for (string s : ans)
            res.emplace_back(s);
        
    return res;
    }
};