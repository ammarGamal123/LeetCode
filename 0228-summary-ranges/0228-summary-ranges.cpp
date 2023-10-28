class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
       vector <string> ans;
    if (a.empty()) return ans;
    if (a.size() == 1){
        string s = to_string(a[0]);
        ans.emplace_back(s);
        return ans;
    }
    long long next = a[0];
    long long fst = a[0];
    bool found = false;
    for (long long i = 1; i < a.size(); i++){
        if (next + 1 == a[i]){
           found = true;
           next = a[i];
        }
        
        else {
            if (found){
                found = false;
                string str = "";
                string num = to_string(fst);
                str += num;
                str += "->";
                string num2 = to_string(next);
                str += num2;
                ans.emplace_back(str);
                fst = a[i];
                next = a[i];
            }
            else {
                string str = "";
                string num = to_string(fst);
                str += num;
                ans.emplace_back(str);
                 fst = a[i];
                 next = a[i];
            }
        }
    }
    long long n = a.size();
    if (next + 1 == a[n - 1]){
        found = true;
        next = a[n - 1];
    }
    else {
        if (found){
            found = false;
            string str = "";
            string num = to_string(fst);
            str += num;
            str += "->";
            string num2 = to_string(next);
            str += num2;
            ans.emplace_back(str);
            fst = a[n - 1];
            next = a[n - 1];
        }
        else {
            string str = "";
            string num = to_string(fst);
            str += num;
            ans.emplace_back(str);
            fst = a[n - 1];
            next = a[n - 1];
        }
    }
    return ans;
    }
};