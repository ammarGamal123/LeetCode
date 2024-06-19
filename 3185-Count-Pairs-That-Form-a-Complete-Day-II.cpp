class Solution {
public:
    
    #define ll long long
    
    long long countCompleteDayPairs(vector<int>& hours) {
        map<int,int> mp;
        for(int val : hours) mp[val%24]++;
        
        ll ans = 0;
        for(auto [val, f] : mp){
            if(val == 0 || 2*val == 24){
                ans += (ll)f*(f-1)/2; // since both reminders are same, we pairup any 2 of them at a time
            }else{
                int f2 = mp[24-val];
                ans += (ll)f*(ll)f2; // since both reminders are same, we consider all pairs
                
                mp[24-val] = 0;
            }
        }
        
        return ans;
    }
};