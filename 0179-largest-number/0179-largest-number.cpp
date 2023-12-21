class Solution {
public:
    
    static bool comp (string s1 , string s2) {
        
        string concat = s1 + s2;
        string concat2 = s2 + s1;
        
        return concat > concat2;
     
    }
    string largestNumber(vector<int>& nums) {

        vector<string> a;
        string ans = "";

        for (int i = 0; i < nums.size(); i++) {
            a.emplace_back(to_string(nums[i]));
        }

        sort(a.begin(), a.end(), comp);

        for (string &s: a) {

            ans += s;
        }
        if (ans.front() == '0') return "0";
        else 
            return ans;
    }
};