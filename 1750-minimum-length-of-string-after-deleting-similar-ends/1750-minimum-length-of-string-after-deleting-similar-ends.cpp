class Solution {
public:
    int minimumLength(string a) {
        int n = a.size(), l = 0, r = n - 1, same = 0;

    while (l < r && a[l] == a[r]) {
        
        while (l <= r && a[l] == a[r]) {
            ++l;
            ++same;
        }
        while (r >= l && a[r] == a[l - 1]) {
            --r;
            ++same;
        }
    }

    return n - same;
    }
};