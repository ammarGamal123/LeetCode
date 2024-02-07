class Solution {
public:
    double findMedianSortedArrays(vector<int>& a1, vector<int>& a2) {
        vector <int> merged;
        for (int i = 0;i < a1.size(); i++){
            merged.emplace_back(a1[i]);
        }
        for (int i = 0;i < a2.size(); i++){
            merged.emplace_back(a2[i]);
        }
        sort (merged.begin() , merged.end());

        double median = 0;

        int n = merged.size() / 2 , sz = merged.size();
        if (sz % 2 == 0){
            median = (merged[n] + merged[n - 1]) / 2.0;
        }
        else median = merged[n];

        return (median / 1.0);

    }
};