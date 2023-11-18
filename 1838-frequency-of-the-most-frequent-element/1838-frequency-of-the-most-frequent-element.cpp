class Solution {
public:
    int maxFrequency(vector<int>& a, int k) {
        sort (a.begin() , a.end());
        int left = 0 , ans = 0 ;
        long long curr = 0;
        
        for (int right = 0; right < a.size(); right ++){
            long target = a[right];
            curr += target;
            while ((right - left + 1) * target - curr > k){
                curr -= a[left];
                left ++;
            }
            ans = max (ans , right - left + 1);
        }
        return ans;
    }
};