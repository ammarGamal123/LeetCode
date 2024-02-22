class Solution {
public:
    bool check(string &a, string &b)    {
       
        if(b.size() < a.size())   return false;
        string x = b.substr(0, a.size());
        string y = b.substr(b.size()-a.size());
        // cout << a << " " << b << " " << x << " " << y << endl;
        return a==x && a ==y;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0, n = words.size();
        for(int i=0; i<n; i++)  
            for(int j=i+1; j<n; j++)
                if(check(words[i], words[j]))   cnt++;
        return cnt;
            
    }
};