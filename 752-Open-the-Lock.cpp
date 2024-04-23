class Solution {
public:
    int openLock(vector<string>& deadEnds, string target) {

    vector <bool> seen (10000);

    for (string& s : deadEnds){
        seen[stoi(s)] = true;
    }

    if (seen[0]) return -1;

    queue<pair<int,string>> q;
    q.emplace(0 , "0000");
    seen[0] = true;

    while (!q.empty()){
        auto [turn , s] = q.front();
        q.pop();
        if (s == target) return turn;
        for(int d = 0; d < 4; d ++){
            for (int i = -1; i <= 1; i += 2){
                string t =s ;
                char & move = t[d];
                move = (move - '0' + i + 10 ) % 10 + '0';
                int x = stoi (t);
                if (!seen[x]){
                    q.emplace(turn + 1 , t);
                    seen[x] = 1;
                }
                
            }
        }
    }

    return -1;
}

};