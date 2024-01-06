class Solution {
public:
    static bool comp (pair<pair <int,int>,int> p1 , pair <pair<int,int>,int> p2){
        if (p1.first.second == p2.first.second)
            return p1.first.first < p2.first.first;

        return p1.first.second < p2.first.second;
}


int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
    int ans {} , n = startTime.size();
    vector <pair<pair <int,int>,int>> merge;
    vector <pair <int,int>> greedy;
    map <int,int> dp;
    dp[0] = 0;
    for (int i = 0;i < startTime.size(); i++){
        pair <pair <int,int> , int> cur = {{startTime[i] , endTime[i]} , profit[i]};
        merge.emplace_back(cur);
        greedy.emplace_back(startTime[i] , profit[i]);
    }

    sort (merge.begin() , merge.end() , comp);
    sort (greedy.begin() , greedy.end());

//    for (int i = 0;i < n; i++){
//        cout << merge[i].first.first << " " << merge[i].first.second
//        << " " << merge[i].second << endl;
//    }

    for (int i = 0;i < n; i++){
        int profits = prev(dp.upper_bound(merge[i].first.first))->second + merge[i].second;

        if (profits > dp.rbegin()->second)
            dp[merge[i].first.second] = profits;
    }



    return dp.rbegin()->second;
}
};