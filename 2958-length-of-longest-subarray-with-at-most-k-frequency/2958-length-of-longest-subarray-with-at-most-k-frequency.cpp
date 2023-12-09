class Solution {
public:
    int maxSubarrayLength(vector<int>& a, int k) {
      int n = a.size();
    int left = 0;
    int ans = 0;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        mp[a[i]]++;

        while (mp[a[i]] > k) {
            mp[a[left]]--;
            if (mp[a[left]] == 0) {
                mp.erase(a[left]);
            }
            left++;
        }

        ans = max(ans, i - left + 1);
    }

    return ans;
    }
};