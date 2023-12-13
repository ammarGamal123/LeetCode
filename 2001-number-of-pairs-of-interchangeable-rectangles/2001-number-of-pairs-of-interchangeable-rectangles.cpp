class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int prod = 100000;
    map <double,long long> mp;

    for (int i = 0;i < rectangles.size(); i++){
        double width = rectangles[i][0];
        double height = rectangles[i][1];
        
        mp[width / height] ++;
    }

    long long ans {};
    for (auto i : mp){
        if (i.second >= 2){
            ans += (i.second * (i.second - 1)) / 2;
        }
    }
    
    return ans;
    }
};