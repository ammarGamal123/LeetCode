class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size() , penalty {} , maxPenalty {} , index {-1};
        
        for (int i = 0;i < n; i++){
            penalty += customers[i] == 'Y' ? 1 : -1;
            
            if (penalty > maxPenalty){
                maxPenalty = penalty;
                index = i;
            }
        }
        
        return index + 1;
    }
};