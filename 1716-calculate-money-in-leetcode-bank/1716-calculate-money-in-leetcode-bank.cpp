class Solution {
public:
    int totalMoney(int n) {
    if (n <= 7){
        return (n * (n + 1)) / 2;
    }
    int ans {};
    vector <int> a {1 , 2 , 3, 4 , 5 , 6 , 7};
    int cur = 0;
    int cnt = 0;

    for (int i = 1;i <= n;i++){
        if ((i - 1) % 7 == 0 && (i - 1)){
            ++ cnt;
            cur = 0;
            ans += a[cur % 7] + cnt;

        }
        else ans += a[++cur % 7] + cnt ;
        
    }

        
        return ans;
    }
};