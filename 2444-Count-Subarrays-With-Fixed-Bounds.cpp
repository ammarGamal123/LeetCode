class Solution {
public:
    long long countSubarrays(vector<int>& a, int minK, int maxK) {
        long long l = -1 , n = a.size() , ans {};
        long long curMinK {-1} , curMaxK {-1};
        int cnt {};
        for  (int r = 0; r < a.size(); r++){
            if (a[r] < minK || a[r] > maxK)
                l = r;

            if (a[r] == minK)
                curMinK = r;

            if (a[r] == maxK)
                curMaxK = r;

            ans += max (0LL , min (curMaxK , curMinK) - l);
                     
            
        }
        
        return ans;
    }
};