class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        deque <int> ans;
        for (auto &i : a){
            if (i & 1) ans.emplace_back(i);
            else ans.emplace_front(i);
        }
        return vector (ans.begin() , ans.end());
    }
};