class Solution {
public:
    bool binary_search(int l , int r , int n){
        if (l > r) return false;
        long long mid = (l + r) / 2;
        if (mid * mid == n) return true;
        else if (mid * mid > n){
          return  binary_search(l , mid - 1 , n);
        }
        else
           return  binary_search(mid + 1 , r , n);
    }

    bool judgeSquareSum(int c) {
        for (long long a = 0; a * a <= c; a++){
            int b = c - (a * a);
            if (binary_search(0 , b , b )){
                return true;
            }
        }   
        return false;
    }
};