class Solution {
public:
    int missingNumber(vector<int>& a) {
           sort (a.begin() , a.end());
        int ans {};
        int l = 0 , r = a.size() - 1;
        while (l <= r){
            const int mid = (l + r ) / 2;
            if (a[mid] == mid)
                l = mid + 1 , ans = l;
                else  r = mid - 1;
        }
        return ans;
    }
};