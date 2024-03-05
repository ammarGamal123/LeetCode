class Solution {
public:
    int minimumLength(string a) {
        int n = a.size(), l = 0, r = n - 1, same = 0;

    while (l < r && a[l] == a[r]) {
        char target = a[l];
        while (l <= r && a[l] == target) {
            ++l;
            ++same;
        }
        while (r >= l && a[r] == target) {
            --r;
            ++same;
        }
    }

    return n - same;
    }
};