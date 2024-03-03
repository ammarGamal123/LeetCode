class Solution {
public:
    long long zeroFilledSubarray(vector<int>& a) {
        long long ans {count(a.begin() , a.end() , 0)};
        if (!ans) return 0;
        if (ans == 1) return 1;
        ans = 0;
        for (int i = 0;i < a.size(); i++){
            long long j = i, cnt {0};
            while (j < a.size() && !a[j]){
                cnt ++;
                ++ j;            
            }
            if (cnt >= 1){
                i = !j ? j : j - 1;
              //cout << cnt << endl;
                ans += (cnt * (cnt + 1)) / 2;
            }
            
        }

        return ans;
    }
};