class Solution {
public:
   int minOperations(string s) {
    int ans{}, ans2{};
    bool turn = false;
    string perfect1 = "", perfect2 = "";
    perfect1 = "0";
    for (int i = 1; i < s.size(); i++) {
        perfect1 += (1 ^ (perfect1[i - 1] - '0')) + '0';
    }
    for (int i = 0; i < s.size(); i++) {
        ans += perfect1[i] != s[i];
    }

    perfect2 = "1";
    for (int i = 1; i < s.size(); i++) {
        perfect2 += (1 ^ (perfect2[i - 1] - '0')) + '0';
    }
    for (int i = 0; i < s.size(); i++) {
        ans2 += perfect2[i] != s[i];
    }

    


    return min(ans , ans2);
   }
};