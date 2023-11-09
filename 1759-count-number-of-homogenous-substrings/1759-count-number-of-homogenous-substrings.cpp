class Solution {
public:
    int countHomogenous(string s) {
        unsigned long long sum = 0 , n = s.size();
    vector <int> freq(27 , 0);

    for (char i : s)
        freq[i - 'a'] ++;

    for (int i = 0;i < 26; i++){
        if (freq[i] > 0)
            sum += freq[i];
    }

    for (int i = 0;i < n - 1; i++){
        if (s[i] == s[i + 1]){
            int j = i + 1;
            long long cnt {1};
            while (s[i] == s[++j] && j < n){
                ++ cnt;
            }
            sum += (unsigned long long)((cnt * (cnt + 1LL)) / 2LL);
            i = j - 1;
        }
    }


    return sum % 1000000007;
        
    }
};