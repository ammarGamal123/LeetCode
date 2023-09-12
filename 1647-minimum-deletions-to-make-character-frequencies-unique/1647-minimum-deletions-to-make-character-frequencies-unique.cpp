class Solution {
public:
    int minDeletions(string s) {
    int ans {};
    vector <int> freq(26 , 0);

    for (auto i : s)
        freq[i - 'a'] ++;

    sort (freq.begin() , freq.end());

    for (int i = 24;i >= 0; i--){
        if (freq[i] == 0)
            break;

        if (freq[i] >= freq[i + 1]){
            int prev = freq[i];
            freq[i] = max (0 , freq[i + 1] - 1);
            ans += prev - freq[i];
        }
    }
    return ans;
    }
};