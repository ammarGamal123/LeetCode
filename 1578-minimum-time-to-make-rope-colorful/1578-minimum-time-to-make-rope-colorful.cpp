class Solution {
public:
   int minCost(string colors, vector<int>& neededTime) {
     int ans{};

     for (int i = 1; i < colors.size(); i++) {
         if (colors[i] == colors[i - 1]) {
             int j = i , sum = neededTime[i - 1];
             priority_queue <int , vector<int> , less<>> pq;
             pq.push(neededTime[i - 1]);
             while (j < colors.size() && colors[i - 1] == colors[j]){
                 sum += neededTime[j];
                 pq.push(neededTime[j ++]);
             }
             if (j < colors.size()) i = j;
             else i = j - 1;
           //  cout << sum << " " << pq.top() << endl;
             ans += sum - pq.top();
         }
     }

     return ans;
 }
};