class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size() , m = s.size();
        
        sort (g.begin() , g.end());
        sort (s.begin() , s.end());
        
        int cookieIdx {} , contentChild {};
        
        while (cookieIdx < s.size() && contentChild < g.size()){
            if (s[cookieIdx] >= g[contentChild])
                contentChild ++;
        
            cookieIdx ++;
        }
        
        return contentChild;
    }
};