class Solution {
public:
    bool check(string &a, string &b)    {
        int n = a.length(), m = b.length();
        if(m < n)   return false;
        string x = b.substr(0, n);
        string y = b.substr(m-n);
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