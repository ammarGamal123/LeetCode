class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "" , s2 = "";
        
        for (string &i : word1)
            s1 += i;
        
        for (string &i : word2)
            s2 += i;
        
        
        return s1 == s2;
    }
};