class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        if (a.size() == 1 || a.size() == 2)
            return true;

        bool ok = a[0] <= a[1];
        bool ok2 = a[0] >= a[1];
        for (int i = 1;i < a.size() - 1;i++){
            ok &= a[i] <= a[i + 1];
            ok2 &= a[i] >= a[i + 1];
        }
        return ok || ok2;
    }
};