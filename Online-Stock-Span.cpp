1class StockSpanner {
2public:
3    stack<pair<int,int>> st;
4    StockSpanner() {
5        
6    }
7    
8    int next(int price) {
9        int span = 1;
10
11        while(!st.empty() && st.top().first <= price){
12            span += st.top().second;
13            st.pop();
14        }    
15        st.push({price, span});
16        
17        return span;
18    }
19};
20
21/**
22 * Your StockSpanner object will be instantiated and called as such:
23 * StockSpanner* obj = new StockSpanner();
24 * int param_1 = obj->next(price);
25 */