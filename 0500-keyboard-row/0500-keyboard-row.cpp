class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector <bool> freq(26) , freq2(26) , freq3(26);

    string s = "qwertyuiop";
    for (auto &i : s){
        if (i >= 'A' && i <= 'Z')
            i += char(32);

        freq[i - 'a'] = true;
    }

    string s2 = "asdfghjkl";
    for (auto &i : s2){
        if (i >= 'A' && i <= 'Z')
            i += char(32);

        freq2[i - 'a'] = true;
    }
    string s3 = "zxcvbnm";
    for (auto &i : s3){
        if (i >= 'A' && i <= 'Z')
            i += char(32);

        freq3[i - 'a'] = true;
    }

    vector <string> ans;

    for (int i = 0;i < words.size(); i++){
        bool flag1 = true , flag2 = true , flag3 = true , upper = false;
        for (int j = 0;j < words[i].size(); j++){
            if (words[i][j] >= 'A' && words[i][j] <= 'Z')
                words[i][j] += char(32) , upper = true;
            
            if (!freq[words[i][j] - 'a'])
                flag1 = false;
            if (!freq2[words[i][j] - 'a'])
                flag2 = false;
            if (!freq3[words[i][j] - 'a'])
                flag3 = false;
             
            if (upper)
                words[i][j] -= char(32) , upper = false;
        }
        int cnt = flag1 + flag2 + flag3;
        if (cnt == 1)
            ans.emplace_back(words[i]);
    }
        return ans;
    }
};