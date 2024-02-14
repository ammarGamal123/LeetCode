class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
       queue <int> pos,neg;

        for (auto &i : a){
            if (i > 0) pos.push(i);
            else neg.push(i);
        }
        for (int i = 0;i < a.size(); i++){
            if (i % 2 == 0){
                a[i] = pos.front();
                pos.pop();
            }
            else {
                a[i] = neg.front();
                neg.pop();
            }
        }

        return a;
    }
};