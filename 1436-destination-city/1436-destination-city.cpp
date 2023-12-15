class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set <string> outgoing;
            
        for (int i = 0;i < paths.size(); i++){
             outgoing.insert(paths[i][0]);
        }
        
            
        for (int i = 0; i < paths.size(); i++){
            string candidate = paths[i][1];
            
            if (outgoing.find(candidate) == outgoing.end())
                return candidate;
        }
        
        return "";
    }
};