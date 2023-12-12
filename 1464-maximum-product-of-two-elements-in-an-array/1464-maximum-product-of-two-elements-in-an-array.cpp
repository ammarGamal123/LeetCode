class Solution {
public:
    int maxProduct(vector<int>& a) {
        priority_queue <int> pq;
        while (a.size())
            pq.push(a.back()) , a.pop_back();
        
        
        int prod = 1 , cnt = pq.size() - 2;
        while (pq.size() > cnt){
            prod *= (pq.top() - 1);
            pq.pop();
        }
        
        return prod;
    }
};