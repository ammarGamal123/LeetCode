class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& a, int k) {
        if (k <= 1) return 0; // If k <= 1, no subarray product can be less than k
    
    int l = 0, ans = 0, product = 1;
    
    for (int r = 0; r < a.size(); r++) {
        product *= a[r];
        
        while (product >= k && l <= r)
            product /= a[l++]; // Increment l and update product
        
        ans += r - l + 1; // Count all subarrays from l to r
    }
    
    return ans;
    }
};