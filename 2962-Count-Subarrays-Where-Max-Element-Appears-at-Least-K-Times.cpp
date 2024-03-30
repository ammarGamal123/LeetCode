class Solution {
public:
    long long countSubarrays(vector<int>& a, int k) {
        long long ans {};
        vector <int> freq(1000005);
        int mx = *max_element(a.begin() , a.end());
        int l = 0 , cnt {} , maxN {};
        for (int r = 0; r < a.size(); r++){
            if (a[r] == mx){
                ++ cnt; 
            }

            while (cnt > k || (l <= r && cnt == k && a[l] != mx)) {
                if (a[l] == mx){
                    -- cnt;
                }       
                ++ l;
            }

            if (cnt == k)
                ans += l + 1;

        }

        return ans;
    }
};