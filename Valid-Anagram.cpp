1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        vector <int> freq(26,0) , freq2(26,0);
5        for (auto i : s) freq[i - 'a']++;
6        for (auto i : t) freq2[i - 'a']++;
7        return freq == freq2;
8    }
9};