class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int n = gas.size();
    int total_gas = 0;
    for (int i = 0;i < n ;i++){
        gas[i] -= cost[i];
        total_gas += gas[i];
    }
    if (total_gas < 0) return -1;

    int ans = 0;
    total_gas = 0;
    for (int i = 0; i < n; i++){
        total_gas += gas[i];
        if (total_gas < 0)
            ans = i + 1 , total_gas = 0;
    }
    return ans;
    }
};