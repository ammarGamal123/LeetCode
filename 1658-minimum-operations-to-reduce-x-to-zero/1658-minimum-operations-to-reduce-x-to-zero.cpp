class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int target = 0 , n = a.size();
        for (auto i : a) target += i;
        
        target -= x;
        
        if (!target) return n;
        
        int max_len = 0 , cur_sum = 0 , left = 0;
        
        
        for (int i = 0;i < n; i++){
            cur_sum += a[i];
            while (left <= i && cur_sum > target){
                cur_sum -= a[left ++];
            }
            if (cur_sum == target){
                max_len = max(max_len , i - left + 1);
            }
        }
        return max_len ? n - max_len : -1;
    }
};