class Solution {
public:
    bool isStrictlyPalindromic(int n) {
       int cnt = 2;
    int N = n - 2, origin = n;
    while (N >= 2){
        n = origin;
        string base_2 = "";
        while (n){
            if (n % cnt == 1) base_2 += '1';
            else base_2 += '0';
            n /= cnt;
        }
        for (int i = 0;i < base_2.size(); i++){
            if (base_2[i] != base_2[base_2.size() - i - 1])
                return false;
        }
        N-- , cnt ++;
    }
    return true;
    }
};