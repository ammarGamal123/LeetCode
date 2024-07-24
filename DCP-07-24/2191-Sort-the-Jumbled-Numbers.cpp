class Solution {
public:
    
static bool compare (pair<int , int> p1 , pair<int , int> p2){
    if (p1.second == p2.second)
        return false;

    return p1.second < p2.second;
}
vector<int> sortJumbled(vector<int>& mapping, vector<int>& a) {
    int n = mapping.size() , m = a.size();
    // mapping =  [8 , 9 , 4 , 0 , 2 , 1 , 3 , 5 , 7 , 6]
    // a       =  [0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9]
    vector<pair<int , int>> need;
    for (int i = 0; i < m; i++) {
        string digits = to_string(a[i]);
        cout << digits << endl;
        for (int j = 0; j < digits.size(); j++) {

            digits[j] = to_string(mapping[digits[j] - '0'])
                        .front();
        }

        int num = stoi(digits);
        need.emplace_back(a[i], num);
        a[i] = stoi(digits);
    }

    for (auto i : need)
        cout << i.first << " " << i.second << endl;

    sort (need.begin() , need.end() , compare);

    for (int i = 0; i < need.size(); i++){
        a[i] = need[i].first;
    }

    return a;
}
};