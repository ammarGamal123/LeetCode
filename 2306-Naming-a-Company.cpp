class Solution {
public:
long long distinctNames(vector<string>& ideas) {
    long long ans = 0;
    int n = ideas.size();
    unordered_set<string> st[26];

    for (string s : ideas)
        st[s[0] - 'a'].insert(s.substr(1));

    for (int i = 0;i < 26; i++){
        for (int j = i + 1; j < 26; j ++){
            int mutual = 0;
            for (auto &word : st[i]){
                if (st[j].count(word)) mutual ++;
            }
            long long comb = (st[i].size() - mutual) *
                             (st[j].size() - mutual);
            ans += 2 * comb;
        }
    }

    return ans;
}
};