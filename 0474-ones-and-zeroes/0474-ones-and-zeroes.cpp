class Solution {
public:
    int findMaxForm (vector <string>& strs , int m , int n){
        vector <vector <int>> dp (m + 1 , vector <int> (n + 2 , 0));
        vector <pair <int,int>> a;
        for (string x : strs){
            int cnt = count(x.begin() , x.end() , '0');
            a.emplace_back(cnt , x.size() - cnt);
        }
        for (auto pr : a){
            for (int i = m; i >= 0; i--){
                for (int j = n; j >= 0; j--){
                    if (i >= pr.first && j >= pr.second){
                        dp[i][j] = max (dp[i][j] , 1 + dp[i - pr.first][j - pr.second]);
                    }
                }
            }
        }
        return dp[m][n];
    }
    
};