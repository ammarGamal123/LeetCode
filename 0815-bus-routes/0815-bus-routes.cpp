class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        if (source == target)
        return 0;

    std::unordered_map<int, std::vector<int>> graph;
    for (int i = 0; i < routes.size(); i++) {
        for (int stop : routes[i]) {
            graph[stop].push_back(i);
        }
    }

    std::queue<std::pair<int, int>> q;
    q.push(std::make_pair(source, 0));

    std::unordered_set<int> visited;
    visited.insert(source);

    while (!q.empty()) {
        int currStop = q.front().first;
        int busesTaken = q.front().second;
        q.pop();

        if (currStop == target)
            return busesTaken;

        for (int route : graph[currStop]) {
            for (int nextStop : routes[route]) {
                if (visited.find(nextStop) == visited.end()) {
                    q.push(std::make_pair(nextStop, busesTaken + 1));
                    visited.insert(nextStop);
                }
            }
            routes[route].clear(); // Mark the route as visited to avoid revisiting it
        }
    }

    return -1;
}
    
};