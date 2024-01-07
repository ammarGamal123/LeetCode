class Solution {
public:
    string str = "";
    void recursion(vector<string>& res, int open, int close) {
        if(open == 0 && close == 0) {
            res.push_back(str);
            return;
        }
        if(open > 0) {
            str += "(";
            recursion(res, open-1, close);
            str = str.substr(0, str.size()-1);
        }
        if(close > open) {
            str += ")";
            recursion(res, open, close-1);
            str = str.substr(0, str.size()-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        recursion(ans , n , n);
        
        return ans;
    }
};