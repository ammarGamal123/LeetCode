class Solution {
public:
int maxWidthRamp(vector<int>&a){
    int n = a.size();
    stack <int> st;

    // build the stack with decreasing indices
    for (int i = 0; i < n; i++) {
        if (st.empty() || a[st.top()] > a[i]) {
            st.push(i);
        }
    }

    int maxWidth = 0;

    for (int j = n - 1; j >= 0; j--) {
        while (!st.empty() && a[st.top()] <= a[j]) {
            maxWidth = max(maxWidth , j - st.top());
            st.pop();
        }
    }

    return maxWidth;
}


};