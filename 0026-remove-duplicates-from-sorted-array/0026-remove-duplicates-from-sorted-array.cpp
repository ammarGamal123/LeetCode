class Solution {
public:
    int removeDuplicates(vector<int>& a) {
    for (auto it = a.begin(); it < a.end() - 1; it++) {
        if (*it == *(it + 1)) {
            a.erase(it);
            it--;
        }
    }
    return a.size();
    }
};