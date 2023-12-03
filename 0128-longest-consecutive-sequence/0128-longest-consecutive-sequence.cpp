class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        
    priority_queue<int> pq;


    for (auto &i : a) pq.push(i);

    if (pq.empty()){
        return 0;
    }
    if (pq.size() == 1)
        return 1;
    int prev = 0 , cur = 0 , cnt = 1 , Max = -1;

    while (pq.size() >= 1){
        prev = pq.top();
        pq.pop();
        cur = pq.top();
        if (prev == cur){
            pq.top();
            Max = max (cnt , Max);
            continue;
        }
        else if (abs (prev - cur) == 1){
            cnt ++;
        }
        else {
            Max = max (cnt , Max);
            cnt = 1;
        }

    }
    return Max;
}
};