class Solution {
public:
    string toBinary(int n) {
    string binary = "";
    while (n != 0) {
       binary += n % 2 == 0 ? '0' : '1';
        n /= 2;
    }
    reverse(binary.begin() , binary.end());
    return binary;
}

int to_int(string s) {
    int res=0;
    for(char c : s) {
        res=res*2+c-'0';
    }
    return res;
}

int maxGoodNumber(vector<int>& a) {
    int n = a.size();
    string str1 = toBinary(a[0]);
    string str2 = toBinary(a[1]);
    string str3 = toBinary(a[2]);

    vector <string> s{str1 , str2 , str3};
    sort(s.begin() , s.end());
    int mx=0;
        do {
            mx=max(mx,to_int(s[0]+s[1]+s[2]));
        } while(next_permutation(s.begin() , s.end()));
        return mx;
}
};