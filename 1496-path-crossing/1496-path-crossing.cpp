class Solution {
public:
    bool isPathCrossing(string path) {
    map <pair<int,int> , bool> store;
    pair <int,int> dir {0 , 0};
    store[dir] = true;
    for (int i = 0;i < path.size();i++){
        if (path[i] == 'N') dir.first += 1;
        else if (path[i] == 'S') dir.first -= 1;
        else if (path[i] == 'E') dir.second += 1;
        else dir.second -= 1;
        
        if (store.count(dir)) return true;
        else store[dir] = true;
    }
    return false;
    }
};