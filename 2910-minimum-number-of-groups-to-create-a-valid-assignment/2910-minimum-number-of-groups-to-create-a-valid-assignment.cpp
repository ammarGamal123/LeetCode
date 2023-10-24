class Solution {
    
public:
    #define Ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))

    int minGroupsForValidAssignment(vector<int>& a) {
    map <int,int> mp;

    for (int i : a) mp[i] ++;

    vector <int> freq;

    for (auto i : mp){
        freq.emplace_back(i.second);
    }

    sort (freq.begin() , freq.end());

    int sz = freq.size();
    int group {sz};

    for (int i = freq[0]; i >= 1; i --){
        bool ok = true;
        int t = 0;
        for (int n : freq){
            if (n % (i + 1) == 0){
                t += n / (i + 1);
                continue;
            }
            int b = n / (i + 1) , r = n % (i + 1);

            if (i - r <= b){
                t += n / (i + 1) + 1;
                continue;
            }
            ok = false;
            break;
        }
        if (ok) return t;

    }

    return -1;
    }
};