class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    vector <int> ans;
    vector <int> freqP (26 , 0);
    vector <int> freqCur(26 , 0);

    for (auto i : p){
        freqP[i - 'a']++;
    }

    for (int i = 0; i < s.size(); i++){
        freqCur[s[i] - 'a']++;

        if (i >= p.size()) freqCur[s[i - p.size()] - 'a']--;
        if (freqCur == freqP)
            ans.emplace_back(i - p.size() + 1);
    }
    return ans;
    }
};