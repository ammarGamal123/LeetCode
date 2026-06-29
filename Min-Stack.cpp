1class MinStack {
2public:
3    stack<int> st;
4    stack<int> minStack;
5    MinStack() {
6    }
7    
8    void push(int value) {
9        st.push(value);
10        if (minStack.empty() || value <= minStack.top()){
11            minStack.push(value);
12        }
13        else {
14                minStack.push(minStack.top());
15            }
16    }    
17    
18    void pop() {
19        st.pop(), minStack.pop();
20    }
21    
22    int top() {
23        return st.top();
24    }
25    
26    int getMin() {
27        return minStack.top();
28    }
29};
30
31/**
32 * Your MinStack object will be instantiated and called as such:
33 * MinStack* obj = new MinStack();
34 * obj->push(value);
35 * obj->pop();
36 * int param_3 = obj->top();
37 * int param_4 = obj->getMin();
38 */