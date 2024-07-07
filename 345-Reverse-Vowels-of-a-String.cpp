class Solution {
public:
    stack<char> revVowels(string  s){
     stack <char> vowels;
    for (int i = 0;i < s.size(); i++){
        if (s[i] == 'a'
            || s[i] == 'e'
            || s[i] == 'i'
            || s[i] == 'o'
            || s[i] == 'u' )
            vowels.push(s[i]);
        else if (     s[i] == 'a' - 32
                   || s[i] == 'e' - 32
                   || s[i] == 'i' - 32
                   || s[i] == 'o' - 32
                   || s[i] == 'u' - 32) {
            vowels.push(s[i]);

        }
    }

    return vowels;
}
string reverseVowels(string s) {
    stack <char> vowels = revVowels(s);
    if (vowels.empty()) return s;
    int cnt {};
    for (int i = 0;i < s.size(); i++){
        if (   s[i] == 'a' || s[i] == 'a' - 32
            || s[i] == 'e' || s[i] == 'e' - 32
            || s[i] == 'i' || s[i] == 'i' - 32
            || s[i] == 'o' || s[i] == 'o' - 32
            || s[i] == 'u' || s[i] == 'u' - 32){
            cout << s[i] << endl;
            s[i] = vowels.top();
            vowels.pop();
        }
    }

    return s;
}
};