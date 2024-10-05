class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int n2 = s2.size() , n1 = s1.size();
    vector <int> mp (26 , 0) , mp2 (26 , 0);
    for (auto i : s1) mp[i - 'a'] ++;
    int cur = 0;
    int i = 0;
    while (i < n2){
        mp2[s2[i] - 'a'] ++;
        if (i >= n1) mp2[s2[cur++] - 'a'] --;
        if (mp == mp2) return true;
        i++;
    }
    return false;
    }
};