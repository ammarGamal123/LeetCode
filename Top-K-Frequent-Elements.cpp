1bool comp (pair < int , int > p1 , pair < int , int > p2){
2    return p1.second > p2.second;
3}
4class Solution {   
5public:
6
7    vector<int> topKFrequent(vector<int>& a, int k) {
8       map < int , int > mp;
9    for (auto && i : a){
10        mp[i]++;
11    }
12    vector < pair < int , int > > ans;
13    for (auto i : mp){
14        ans.emplace_back(i.first , i.second);
15    }
16    sort (ans.begin() , ans.end() , comp);
17    vector < int > sol;
18    for (int i = 0;i < k; i++){
19        sol.emplace_back(ans[i].first);
20    }
21    return sol;
22    }
23    
24    
25};