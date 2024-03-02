class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
    int n = a.size();
    vector <int> ans (n);
    int l = 0 , r = n - 1 , k = n - 1;
    while (l <= r){
        if (abs (a[l]) > abs (a[r])){
            ans [k--] = (a[l] * a[l]);
            ++l;
        }
        else {
            ans [k--] = (a[r] * a[r]);
            --r;
        }
    }
    return ans;
    }
};