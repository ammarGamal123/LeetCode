class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size())
            return false;
        
        
        vector <int> freq1(26) , freq2(26);
        
        for (auto &i : word1) freq1[i - 'a'] ++;
        for (auto &i : word2) freq2[i - 'a'] ++;
        
        vector <int> a1 , a2;
        
        
        for (int i = 0;i < freq1.size(); i++){
            if (freq1[i] && !freq2[i])
                return false;
            else if (freq2[i] && !freq1[i])
                return false;
            
            a1.emplace_back(freq1[i]);
            a2.emplace_back(freq2[i]);
            
        }
        sort (a1.begin() , a1.end());
        sort (a2.begin() , a2.end());
        
        return a1 == a2;
    }
};