class Solution {
public:
const static int N = 1e6; 
int dp [N];
int solve (int i ){
    if (i == 0 )
        return 1;
    if (i == 1)
        return 1;
    int &ret = dp[i];
    if (~ret ) return ret;
    int left = solve (i - 1);
    int right = solve (i - 2 );
    ret = left + right ;
    return ret;
}
    int climbStairs(int n) {
        memset (dp , -1 , sizeof dp);
      return (solve (n));
    }
};