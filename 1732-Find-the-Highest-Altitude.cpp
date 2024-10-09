class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxAltitude {INT_MIN} , curSum {};
        for (int i = 0;i < gain.size();i ++) {
            maxAltitude = max(maxAltitude, curSum);
            curSum += gain[i];
        }
        maxAltitude = max(maxAltitude , curSum);
        return maxAltitude;  
    }
};