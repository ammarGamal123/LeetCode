class Solution {
public:
    int pivotInteger(int n) {
        
        for (int i = 1; i <= n; i++){
            int curPref = 0;
            int curSuf = 0;
            for (int j = 1; j <= i; j++){
                curPref += j;
            }
            
            for (int k = i; k <= n; k++){
                curSuf += k;
            }
            
            if (curPref == curSuf)
                return i;
        }
        
        return -1;
    }
};