class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& a) {
    int k = a.size();
    //              first                     second
    priority_queue <pair<int,pair<int,int>> , vector <pair<int,pair<int,int>> >, greater<pair<int,pair<int,int>>> > pq;
    // val , i(row) , idx(column)

    int maxVal = -1e9;

    for (int i = 0;i < k; i++) {
        // val , i , 0-->col
        pq.push({a[i][0],{i , 0}});
        maxVal = max(maxVal, a[i][0]);
    }

    vector <int> ans{-100000000,maxVal};
    while (true) {
        int minVal = pq.top().first;
        int i = pq.top().second.first;
        int idx = pq.top().second.second;
        pq.pop();

        if (maxVal - minVal < ans[1] - ans[0]) {
            ans = {minVal, maxVal};
        }

        idx ++;

        if (idx == a[i].size())
            break;

        pq.push({a[i][idx],{i , idx}});

        maxVal = max(maxVal, a[i][idx]);
    }

    return ans;
}
};