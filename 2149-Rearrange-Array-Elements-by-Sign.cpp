class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
       vector <int> pos(a.size() / 2),neg(a.size() / 2);
        int idxPos = 0 , idxNeg = 0;
        for (int i = 0;i < a.size(); i++){
            if (a[i] > 0) pos[idxPos ++] = a[i];
            else neg[idxNeg ++] = a[i];
        }
        idxPos = 0 , idxNeg = 0;
        for (int i = 0;i < a.size(); i++){
            if (i % 2 == 0){
                a[i] = pos[idxPos ++];
            }
            else {
                a[i] = neg[idxNeg ++];
            }
        }

        return a;
    }
};