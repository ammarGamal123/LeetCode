class Solution {
public:
    int getWinner(vector<int>& a, int k) {
       int n = a.size();
        if (k >= n)
            return *max_element(a.begin() , a.end());


        int fst = max(a[0] , a[1]) , scd = min (a[0] , a[1]);

        reverse(a.begin() , a.end());
        a.pop_back();
        a.pop_back();
        reverse (a.begin() , a.end());

        deque <int> dq(n - 2) ;

        for (int i = 0;i < dq.size(); i++){
            dq[i] = a[i];
        }



        int cnt = 0;
        while (k > cnt && dq.size()){
            if (fst > scd){
                ++ cnt;
                scd = dq.front();
                dq.pop_front();
            }
            else {
                cnt = 0;
                int temp = fst;
                fst = scd;
                scd = temp;
            }

        }
        if (cnt >= k)
            return fst;
        else return *max_element(a.begin() , a.end());
    }
};