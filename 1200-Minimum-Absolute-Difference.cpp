class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
       // -10 -- 14 = 4
       // 23 - 19 = 4
       // 27 - 23 = 4


       // 1 , 2 , 3 , 4


       // - 14 , - 10 , 3 , 8 , 19 , 23 , 27


// 1 , 5 , 7 , 12

// update if curAbsDiff < minAbsDiff
    // ignore and take the new pair
    // if not curAbsDiff == minAbsDiff
    // push_back curPair
    // curAbsDiff > minAbsDiff
    // ignore but not take the new pair 


    int n = a.size();

    sort (a.begin() , a.end());

    vector <vector<int>> ans (2);

    // update if curAbsDiff < minAbsDiff
    // ignore and take the new pair
    // if not curAbsDiff == minAbsDiff
    // push_back curPair
    // curAbsDiff > minAbsDiff
    // ignore but not take the new pair 
    int minDiff = INT_MAX;
    for (int i = 1; i < n; i++){
        int curMinDiff = a[i] - a[i - 1];

        if (curMinDiff < minDiff){
            ans.clear();
            ans.push_back({a[i - 1] , a[i]});
            minDiff = curMinDiff;
        } 
        else if (curMinDiff == minDiff){
            ans.push_back({a[i - 1] , a[i]});
        }
    }

    return ans;
    }
};