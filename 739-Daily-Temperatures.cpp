class Solution {
public:

    vector<int> dailyTemperatures(vector<int>& a) {
        stack <pair <int,int>> st;
        vector <int> ans (a.size());
        
        for (int i = 0;i < a.size(); i++){

            while (!st.empty() && a[i] > st.top().second){
                ans[st.top().first] = i - st.top().first;
                st.pop();
            }

            st.push({i , a[i]});
        }

        return ans;
    }
};