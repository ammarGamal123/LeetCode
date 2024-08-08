class Solution {
public:
    bool checkVowels (char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxVowels(string s, int k) {
    int n = s.size();
    int maxAns {};
    int l = 0 , r = k - 1 ;
    int curAns {};
    for (int i = 0; i <= r; i ++){
       curAns += checkVowels(s[i]);
    }

    maxAns = max(maxAns , curAns);

    for (int i = r + 1; i < n; i++){
        curAns -= checkVowels(s[i - k]);
        curAns += checkVowels(s[i]);
        maxAns = max(maxAns , curAns);
    }

    return maxAns;
}
};