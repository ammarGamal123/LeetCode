class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector <int> a (pref.size());

    a.front() = pref.front();
    for (int i = 1;i < pref.size(); i++){
        a[i] ^= (pref[i] ^ pref[i - 1]);
    }
        return a;
    }
};