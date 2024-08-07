class Solution {
public:
    int maxOperations(vector<int>& a, int k) {
    int n = a.size();
    sort (a.begin() , a.end());

    int l = 0 , r = n - 1 , ans {};

    while (l < r){
        if (a[l] + a[r] == k){
            ++ l , -- r;
            ++ ans;
        }
        else if (a[l] + a[r] > k)
            --r;
        else ++ l;
    }


    return ans;
}
};