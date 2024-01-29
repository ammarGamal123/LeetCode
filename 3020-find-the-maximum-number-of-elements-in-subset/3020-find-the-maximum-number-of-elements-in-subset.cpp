
class Solution {
    public:
    int maximumLength(vector<int>& v) {
    map < long long , int > cnt;
    int end = 0;
    for(auto & i : v) ++ cnt[i];

    long long ans = 0;
    if(cnt.count(1)) ans = cnt[1] - (cnt[1] % 2 == 0);
    for (auto &[k , f] : cnt){
        long long t = k , count = 0;
        if (t == 1) count += cnt[t] , cnt[t] = 0;
        
        while (t < INT_MAX && cnt[t] > 0){
            count += 2;
            if (cnt[t] == 1) break;
            cnt[t] = 0;
            t *= t;
        }
        if (count % 2 == 0) 
            count --;
        
        ans = max (ans , count);
    }
    return ans;
}
};