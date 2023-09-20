class Solution {
public:
    int minOperations(vector<int>& a, int x) {
        int n = a.size();
        vector <int> pref (n + 1) , suf (n + 1);
        int ans = INT_MAX;
        for (int i = 1;i <= n;i ++){
            pref[i] += a[i - 1] + pref[i - 1];
        }
        for (int i = n - 1; i >= 0; i--){
            suf[n - i] += a[i] + suf[n - i - 1];
        }
    
        
        for (int i = 0;i <= n; i++){
            int l = 0 , r = n; 
            while (l <= r){
                const int mid = (l + r) / 2;
                if (pref[i] + suf[mid] == x && i + mid <= n){
                    ans = min (ans , i + mid);
                    r = mid - 1;
                }
                else if(pref[i] + suf[mid] > x)
                    r = mid - 1;
                else l = mid + 1;
            }
        }
        return (ans == INT_MAX ? -1 : ans);
    }
};