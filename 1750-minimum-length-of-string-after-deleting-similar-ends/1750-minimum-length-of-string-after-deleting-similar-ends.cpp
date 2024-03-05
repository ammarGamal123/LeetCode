class Solution {
public:
    int minimumLength(string a) {
        int n = a.size(), l = 0, r = n - 1, same = 0;

    while (l < r && a[l] == a[r]) {
        
        int needed = a[l];
        
        while (l <= r && a[l] == needed){
            ++ l;
            ++ same;
        }
        
        while (l <= r && a[r] == needed){
            -- r;
            ++ same;
        }
    }

    return n - same;
    }
};