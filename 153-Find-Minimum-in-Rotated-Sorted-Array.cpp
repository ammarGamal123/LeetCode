class Solution {
public:
    int findMin(vector<int>& a) {
        if (a.size() == 1) return a[0];
        if (a.size() == 2) return min (a[0] , a[1]);
        int ans = a[0];
        int l = 0 , r = a.size() - 1;
        while (l <= r){
            const int mid = (l + r) / 2;
            if (a[mid] < ans){
                r = mid - 1;
                ans = a[mid];
            }
            else l = mid + 1;

        }
    return ans;
    }
};