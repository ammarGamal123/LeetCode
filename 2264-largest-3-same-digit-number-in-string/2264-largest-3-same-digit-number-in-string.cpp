class Solution {
public:
    string largestGoodInteger(string a) {
        string cur = "";
        string ans = "";
        cur += a.front();
        
        for (int i = 1; i < a.size(); i++){
            if (a[i] == cur.front()){
                cur += a[i];
                
                if (cur.size() == 3){
                    int l = cur.front() - '0';
                    int r = ans.size() ? ans.front() - '0' : -1;
                    if (l > r)
                        ans = cur;
                }
            }
            else {
                if (cur.size() == 3){
                    int l = cur.front() - '0';
                    int r = ans.size() ? ans.front() - '0' : -1;
                    if (l > r)
                        ans = cur;
                    
                    
                }
                cur = a[i];
                
            }
        }
        
        return ans;
    }
};