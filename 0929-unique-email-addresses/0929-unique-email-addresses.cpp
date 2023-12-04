class Solution {
public:
    int numUniqueEmails(vector<string>& s) {
        int ans{};
    map<string, unordered_set<string>> store;
    
    string after = "", before = "";
    bool at = false, plus = false;

    for (int i = 0; i < s.size(); i++) {
        at = false , plus = false;
        after = "", before = "";
        for (int j = 0; j < s[i].size(); j++) {
            if (s[i][j] == '@') {
                at = true;
                continue;
            }
            if (s[i][j] == '.' && !at) continue;
            if (s[i][j] == '+' && !at) {
                plus = true;
                continue;
            }
            if (at){
                after += s[i][j];
            }
            else if (!at && !plus){
                before += s[i][j];
            }

        }

        store[before].insert(after);
    }
    for (auto i : store){
        ans += i.second.size();
    }
    return ans;
    }
};