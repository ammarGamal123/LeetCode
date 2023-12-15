class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map <string , int> mp;
        map <string , int> mpFirst;
        
        for (int i = 0;i < paths.size(); i++){
            mp[paths[i][0]] ++;
            mpFirst[paths[i][0]] ++;
            mp[paths[i][1]] ++;
        }
        
        for (pair<string,int> i : mp){
            if (i.second == 1 && !mpFirst.count(i.first)) 
                return i.first;
        }
        
        
        return  "";
        
    }
};