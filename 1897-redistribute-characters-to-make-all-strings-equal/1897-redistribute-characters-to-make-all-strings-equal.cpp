class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map <char,int> store;
        
        for (string word : words){
            for (char c : word){
                store[c] ++;
            }
        }
        
        int n = words.size();
        
        for (auto &[key , val] : store){
            if (val % n != 0)
                return false;
        }
        
        return true;
    }
};