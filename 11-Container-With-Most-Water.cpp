class Solution {
public:
    int maxArea(vector<int>& a) {
    int n = a.size();
    if (n == 2)
        return min(a[0] , a[1]);

    int findMaxArea = 0 , p1 = 0 , p2 = n - 1;
    while (p2 > p1){
        int curMaxArea = (p2  - p1) * min(a[p1] , a[p2]);
        
        if (a[p1] > a[p2])
            p2 --;

        else  p1 ++;

        findMaxArea = max(curMaxArea , findMaxArea);
    }
    return findMaxArea;
}
};