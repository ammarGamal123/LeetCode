class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

    vector <int> freq(26);
    int cntChar {};
    for (char i : allowed)
        ++ freq[i - 'a'];

    int ans {};
    for (int i = 0;i < words.size(); i++){
        bool flag = true;
            for (int j = 0;j < words[i].size(); j++){
                if (!freq[words[i][j] - 'a']){
                    flag = false;
                }
        }
            if (flag)
                ans ++;
    }
    return ans;
}
};