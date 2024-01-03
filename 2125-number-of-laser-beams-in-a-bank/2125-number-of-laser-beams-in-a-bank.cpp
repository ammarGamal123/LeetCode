class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        long long ans {};
        
        int start = -1;
        for (int i = 0;i < bank.size(); i++){
            if (count(bank[i].begin() , bank[i].end() , '1')){
                start = i;
                break;
            }
        }
        if (start == -1) return 0;
        int prevDevices = count(bank[start].begin() , bank[start].end() , '1');
        
        for (int i = start + 1; i < bank.size(); i++){
            
            int curDevices = count(bank[i].begin() , bank[i].end() , '1');
            
            if (!curDevices) continue;
            
            ans += (curDevices * prevDevices);
            prevDevices = curDevices;
        }
                                         
        return ans;
    }
};