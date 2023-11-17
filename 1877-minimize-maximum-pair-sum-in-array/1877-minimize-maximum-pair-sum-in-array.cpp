class Solution {
public:
    int minPairSum(vector<int>& a) {
        int MinSum = INT_MIN;
        sort (a.begin() , a.end());
        int l = 0 , r = a.size() - 1;
        while (l <= r){
            MinSum = max (a[l++] + a[r--] , MinSum);
        }
        
        return MinSum;
    }
};