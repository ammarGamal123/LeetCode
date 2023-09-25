class Solution {
public:
    char findTheDifference(string s, string t) {
        vector <int> freq(26 , 0);
        for (auto i : s) freq[i - 'a'] ++;
        char ans = '#';
        for (auto i : t){
            if (!freq[i - 'a']){
                ans = i;
                return i;
                break;
            }
            if (freq[i - 'a']) -- freq[i - 'a'];
        }
        return ans;
    }
};