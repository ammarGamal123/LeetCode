class Solution {
public:
    long long largestPerimeter(vector<int>& a) {
        long long ans {-1};
        sort (a.begin() , a.end());
        long prevSum {};
        for (int i = 0;i < a.size(); i++){
            if (a[i] < prevSum && i >= 2){
                ans = a[i] + prevSum;
            }
            prevSum += a[i];
        }

        return ans;
    }
};