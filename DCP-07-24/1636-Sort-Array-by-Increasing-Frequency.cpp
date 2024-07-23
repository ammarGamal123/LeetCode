class Solution {
public:
    static bool compare (pair <int,int> p1 , pair <int,int> p2){
    if (p1.first == p2.first)
        return p1.second > p2.second;

    return p1.first < p2.first;
}
vector<int> frequencySort(vector<int>& a) {
    int n = a.size();

    unordered_map <int , int> freq;
    for (int i = 0; i < n; i++){
        ++ freq[a[i]];
    }
    vector <pair<int,int>> need;
    for (auto i : freq) {
        need.emplace_back(i.second , i.first);
    }

    sort (need.begin() , need.end() , compare);

    int cnt = 0;
    for (int i = 0;i < need.size(); i++){
       while (need[i].first --)
           a[cnt ++] = need[i].second;
    }
    return a;
}

};