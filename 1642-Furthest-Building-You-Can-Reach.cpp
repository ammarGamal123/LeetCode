class Solution {
public:
    int furthestBuilding(vector<int>& a, int bricks, int ladders) {
        int n = a.size();
        priority_queue<int, vector<int>, greater<int>> pq;

        for (int i = 0; i < n - 1; i++) {
            int diff = a[i + 1] - a[i];
            if (diff > 0) {
                if (pq.size() < ladders) {
                    pq.push(diff);
                } else {
                    if (pq.empty() || pq.top() >= diff) {
                        bricks -= diff;
                    } else {
                        int poll = pq.top();
                        pq.pop();
                        pq.push(diff);
                        bricks -= poll;
                    }
                    if (bricks < 0)
                        return i;
                }
            }
        }

        return n - 1;
    }
};