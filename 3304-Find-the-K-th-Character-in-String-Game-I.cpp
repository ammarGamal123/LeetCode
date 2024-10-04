class Solution {
public:
    char kthCharacter(int k) {
    string word = "";
    word += "a";

    string ans = "";
    string extra = word;

    for (int i = 0;i < 10; i++){
        int curSize = word.size();
        for (int j = 0; j < curSize; j++){
            if (word[j] == 'z')
                word += 'a';
            else word += word[j] + 1;
        }

        ans = word;
    }


    //cout << ans << endl;
    return ans[--k];
}

};