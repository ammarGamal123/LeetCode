#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& a, vector<vector<int>>& queries) {
        vector <int> store(a.size());
        
        for (int i = 1;i < a.size(); i++){
            if ((a[i] % 2) != (a[i - 1] % 2)){
                store[i] = store[i - 1] + 1;
            }
            else {
                store[i] = store[i - 1];
            }
        }

        vector <bool> ans;

        for (auto &query: queries){
            int left = query[0] , right = query[1];
            if (store[right] - store[left] == (right - left)){
                ans.push_back(true);
            }
            else 
                ans.push_back(false);
        }

        return ans;
    }

};
