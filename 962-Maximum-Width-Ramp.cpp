class Solution {
public:
int maxWidthRamp(vector<int>& a) {
    int n = a.size() , maxWidth {};
    vector <int> indecies(n);
    for (int i = 0; i < n; i++) {
        indecies[i] = i;
    }
    sort (indecies.begin(), indecies.end(),[&](int i , int j) {
        return a[i] != a[j] ? a[i] < a[j] : i < j;
    });



    int minIndex = n;
    for (int idx : indecies) {
        maxWidth = max(maxWidth , idx - minIndex);
        minIndex = min(minIndex, idx);
    }

    return maxWidth;
}


};