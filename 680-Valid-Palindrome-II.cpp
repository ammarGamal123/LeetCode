class Solution {
public:
bool isPalindrome (int p1 , int p2 , string & s){
    if (s[p1] != s[p2])
        return false;

    if (p1 >= p2) return true;

    return isPalindrome(++ p1 , -- p2 , s);
}
bool validPalindrome(string s) {
    int n = s.size();
    int cnt {};

    int p1 = 0 , p2 = n - 1;

    while (p1 < p2) {
        if (s[p1] == s[p2])
            ++ p1 , -- p2;
        else {
            return isPalindrome(p1 + 1, p2 , s) ||
                   isPalindrome(p1 , p2 - 1 , s);
        }
    }

    return true;
}
};