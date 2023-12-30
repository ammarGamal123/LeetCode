class Solution {
public:
    bool makeEqual(vector<string>& words) {
        vector <int> store (26);
        
        for (string word : words){
            for (char c : word){
                store[c - 'a'] ++;
            }
        }
        
        int n = words.size();
        
        for (int i : store){
            if (i % n != 0)
                return false;
        }
        
        return true;
    }
};