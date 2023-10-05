class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int y {-1} , z{-1} , cy{} , cz{};
        for (int i : a){
            if (i == y) cy ++;
            else if (i == z) cz ++;
            else if (! cy) y = i , cy = 1;
            else if (! cz) z = i , cz = 1;
            else cy -- , cz --;
        }
        cy = cz = 0;
        for (int i : a){
            if (i == y) cy ++;
            else if (i == z) cz ++;
        }
        vector <int> ans;
        if (cy > a.size() / 3) ans.emplace_back(y);
        if (cz > a.size() / 3) ans.emplace_back(z);
        
        return ans;
    }
};