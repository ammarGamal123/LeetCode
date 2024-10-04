class Solution {
public:
   bool isValidSubString(string str , int k){
    bool a = false , e = false , vowel_i = false ,
    o = false , u = false;
    int cnt = 0;
    for (int i = 0;i < str.size(); i++){
        if (str[i] == 'a')
            a = true;
        else if (str[i] == 'e')
            e = true;
        else if (str[i] == 'i') vowel_i = true;
        else if (str[i] == 'o') o = true;
        else if (str[i] == 'u') u = true;
        else cnt ++;
    }

    int vowels = a + e + o + u + vowel_i;
    if (vowels == 5 && cnt == k)
        return true;

    return false;
}
// aklailoeu
int countOfSubstrings(string word, int k) {
    int ans = 0;
   int cntConsonants {};
   string cur = "";
    for (int i = 0;i < word.size(); i++){
        for (int j = i; j < word.size(); j++){
            cur += word[j];
            ans += isValidSubString(cur , k);
        }
        cur = "";
    }

   return ans;
}
};