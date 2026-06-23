1class Solution {
2public:
3    int fun (vector < int > &a , int val){
4        int n = a.size();
5        vector < int > ans;
6        for (int i = 0;i < n; i++){
7            if (a[i] != val)
8                ans.emplace_back (a[i]);
9        }
10        a = ans;
11        return a.size();
12    }
13    int removeElement(vector<int>& a, int val) {
14        return fun(a , val);
15    }
16};