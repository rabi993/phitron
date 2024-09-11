#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to detect cycle in an undirected graph.
    bool isCycleUtil(int v, vector<int> adj[], vector<bool>& visited, int parent) {
        visited[v] = true;
        for (int i = 0; i < adj[v].size(); ++i) {
            int u = adj[v][i];
            if (!visited[u]) {
                if (isCycleUtil(u, adj, visited, v))
                    return true;
            } else if (u != parent)
                return true;
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, false);
        for (int v = 0; v < V; ++v) {
            if (!visited[v]) {
                if (isCycleUtil(v, adj, visited, -1))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
