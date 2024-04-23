class Solution {
public:
vector<vector<int>> adjList; // N is the number of vertices

    void buildGraph (vector<vector<int>> &edges) {
    for (int i = 0; i < edges.size(); ++i) {
        int u = edges[i][0];
        int v = edges[i][1];
        adjList[u].
                push_back(v);
        adjList[v].
                push_back(u); // For undirected graphs
    }
}
bool hasPathDFS(vector <vector<int>> &adjList , int start , int dest){
    int n = adjList.size();
    vector <bool> visited(n);
    stack <int> st;

    st.push(start);
    visited[start] = true;

    while (!st.empty()){
        int u = st.top();
        st.pop();

        if (u == dest)
            return true;

        for (int v : adjList[u]){
            if (!visited[v]){
                st.push(v);
                visited[v] = true;
            }
        }
    }

    return false;
}
bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    adjList.resize(n);
    buildGraph(edges);


    return hasPathDFS(adjList , source , destination);

}
};