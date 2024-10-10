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

int maxGoodNumber(vector<int>& a) {
    int n = a.size();
    string str1 = toBinary(a[0]);
    string str2 = toBinary(a[1]);
    string str3 = toBinary(a[2]);

    vector <string> binaries{str1 , str2 , str3};
    int maxBinary = 0;
    sort (binaries.begin() , binaries.end());
    do {
        string concatonate = binaries[0] + binaries[1] + binaries[2];

        maxBinary = max(maxBinary , 
                        stoi(concatonate , nullptr , 2));
    } while(next_permutation(binaries.begin() , binaries.end()));

    // convert from binary string to int
    return maxBinary;
}
};