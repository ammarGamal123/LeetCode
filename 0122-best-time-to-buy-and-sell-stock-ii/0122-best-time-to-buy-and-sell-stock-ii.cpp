class Solution {
public:
    int maxProfit(vector<int>& a) {
        if (a.size() == 1) return 0;
        if (a.size() == 2){
            if (a.front() < a.back()){
                return a.back() - a.front();
            }
            else return 0;
        }
        // [6,1,3,2,4,7]
        int buy {-1} , sell {};
        for (int i = 1; i < a.size(); i++){
            if (a[i - 1] <= a[i] && buy == -1){
                buy = a[i - 1];
            }
            else if (a[i - 1] <= a[i] && buy != -1){
                if (i == a.size() - 1)
                    sell += a[i] - buy;
                continue;
            }
            else {
                if (buy != -1){
                    sell += a[i - 1] - buy;
                    buy = a[i];
                }
                else buy = a[i];
            }
        }
        return sell;
    }
};