class Solution {
public:
    
int longestMonotonicSubarray(vector<int>& a) {
    int incr {} , decr {};
    int cnt = 1;

    for (int i = 0;i < a.size(); i++){
        for (int j = i + 1; j < a.size(); j++){
            if (a[j] > a[j - 1])
                cnt ++;
            else {
                incr = max (incr , cnt);
                cnt = 1;
                break;
            }
        }
        incr = max (incr , cnt);
        cnt = 1;

    }

    cnt = 1;


    for (int i = 0;i < a.size(); i++){
        for (int j = i + 1; j < a.size(); j++){
            if (a[j] < a[j - 1]) cnt ++;
            else {
                decr = max (decr , cnt);
                cnt = 1;
                break;
            }
        }
        decr = max (decr , cnt);
        cnt = 1;
    }


    return max (incr , decr);
}


};