class Solution {
public:
    int removeDuplicates(vector<int>& a) {
       int idx = 0;
       for (auto &i : a){
           if (idx < 2 || i > a [idx - 2]){
               a[idx ++] = i;
           }
       }
       return idx;
    }
};