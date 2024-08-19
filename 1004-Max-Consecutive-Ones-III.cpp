class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
    if (!count(a.begin() , a.end() , 1))
        return k;

    int n = a.size();
    int maxOnes {} , leftZeroPosition {};
    deque<int> zeroPos;

    for (int i = 0;i < n; i++){
        if (!a[i])
            zeroPos.push_back(i);

        if (zeroPos.size() > k){
            leftZeroPosition = zeroPos.front() + 1;
            zeroPos.pop_front();
        }

        maxOnes = max(maxOnes , i - leftZeroPosition + 1);
    }

    return  maxOnes;
}
};