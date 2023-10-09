class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        vector < int > ans {-1 , -1};
    int n = a.size();
    if (n == 1 && a[0] == target){
        ans[0] = 0 , ans[1] = 0;
        return ans;
    }
    else if (n == 1 && a[0] != target)
        return ans;
        else {
    if (binary_search(a.begin() , a.end() , target) == true){
        int left = lower_bound(a.begin() , a.end() , target) - a.begin();
        int right = upper_bound (a.begin() ,a.end() , target) - a.begin();
        ans[0] = left;
        if (right == n && a[right - 1] == target)
            ans[1] = right - 1;
        else if (right != n)
            ans[1] = right - 1;
        else
            ans [1] = left;
        return ans;
    }
    else {
        return ans;
    }
        }
    }
};