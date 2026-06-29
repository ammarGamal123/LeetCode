1class MinStack {
2public:
3    stack<int> st;
4    multiset<int> min;
5    MinStack() {
6    }
7    
8    void push(int value) {
9        st.push(value);
10        min.insert(value);
11    }
12    
13    void pop() {
14        if (*min.begin() == st.top()){
15            st.pop();
16            min.erase(min.begin());
17        }
18        else {
19             auto it = min.find(st.top());
20
21            // 2. Ensure the value exists before erasing
22            if (it != min.end()) {
23                min.erase(it); // Erases exactly ONE instance
24            }
25            st.pop();
26        }
27    }
28    
29    int top() {
30        return st.top();
31    }
32    
33    int getMin() {
34        return *min.begin();
35    }
36};
37
38/**
39 * Your MinStack object will be instantiated and called as such:
40 * MinStack* obj = new MinStack();
41 * obj->push(value);
42 * obj->pop();
43 * int param_3 = obj->top();
44 * int param_4 = obj->getMin();
45 */