class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
    int n = a.size();
    vector < int > suffix_max (n + 1);
    suffix_max[n] = -1;
    for (int i = n - 1; i >= 0; i --){
        suffix_max [i] = max (suffix_max[i + 1] , a[i]);
    }
    suffix_max.erase(suffix_max.begin());
     return suffix_max;
    }
};