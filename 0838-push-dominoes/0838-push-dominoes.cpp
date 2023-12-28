class Solution {
public:
    string pushDominoes(string s) {

    if (s.size() == 1) return s;

    string ans = "";
    char prev;
    int n = s.size() , count = 1;
    vector <int> left(n) , right(n);
    for (int i = 0;i < n; i++){
        if (s[i] == 'R') count = 1 , prev = 'R';
        else if (s[i] != '.') prev = s[i];

        if (prev == 'R' && s[i] == '.')
            right[i] = count ++;
    }

    prev = '.';

    for (int i = n - 1; i >= 0; i--){
        if (s[i] == 'L') count = 1, prev = 'L';
        else if (s[i] != '.') prev = s[i];

        if (prev == 'L' && s[i] == '.')
            left[i] = count ++;
    }

    for (int i = 0;i < n; i++){
        if ((!right[i] && !left[i]) )
            ans += s[i];
        else if (!right[i]) ans += 'L';
        else if (!left[i]) ans += 'R';
        else if (left[i] == right[i]) ans += '.';
        else if (left[i] < right[i])
            ans += 'L';
        else if (right[i] < left[i])
            ans += 'R';
    }


    return ans;
}
};