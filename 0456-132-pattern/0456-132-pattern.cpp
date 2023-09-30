class Solution {
public:
    bool find132pattern(vector<int>& a) {
        if (a.size() < 3) return false;
        
        stack <int> st;
        int maxThird = INT_MIN;
        
        for (int i = a.size() - 1; i >= 0;i --){
            int cur = a[i];
            if (cur < maxThird)
                return true;
            
            while (!st.empty() && st.top() < cur){
                maxThird = st.top();
                st.pop();
            }
            st.push(a[i]);     
        }
        
        return false;
    }
};