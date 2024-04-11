class Solution {
public:
    string getSmallestString(string &s, int k) {
    for (int i = 0;i < s.size(); i++){
        if (s[i] == 'a') continue;

        int dist = s[i] - 'a';
        int distReverse = 26 - (s[i] - 'a');
        int minDist = min(distReverse , dist);
        if (k >= minDist){
            k -= minDist;
            s[i] = 'a';
        }
        else {
            s[i] -= k;
            k = 0;
        }
    }

    return s;
}
};