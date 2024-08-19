class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
    int left = 0 , right = 0 , n = a.size();
    int maxOnes = 0;

    while (right < n){
       if (!a[right])
           -- k;

       while (k < 0){
            if (!a[left]){
                ++ k;
            }
            ++ left;
       }
       maxOnes = max(maxOnes , right - left + 1);
       ++ right;
    }
    return maxOnes;
}
};