class Solution {
public:
    vector<string> buildArray(vector<int>& a, int n) {
        int push {} , pop {} , cur {0};
        vector <string> ans;
        
        for (int i = 0;i < a.size(); i++){
            if (cur + 1 == a[i])
                ans.push_back("Push") , cur = a[i];
            else {
                int diff = a[i] - cur;
                
                while (diff > 1)
                    ans.push_back("Push") , ans.push_back("Pop") , diff --;
                
                ans.push_back("Push");
                cur = a[i];
            }
        }
        
        return ans;
    }
};