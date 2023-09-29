class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        if (is_sorted(a.begin() , a.end()) || is_sorted(a.rbegin() , a.rend()))
            return true;
        else return false;
    }
};