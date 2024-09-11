#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to detect cycle in a directed graph.

    bool isCyclicUtil(int v, vector<int> adj[], vector<bool>& visited, vector<bool>& recStack) {
        if (!visited[v]) {
            visited[v] = true;
            recStack[v] = true;

            for (int u : adj[v]) {
                if (!visited[u] && isCyclicUtil(u, adj, visited, recStack))
                    return true;
                else if (recStack[u])
                    return true;
            }
        }
        recStack[v] = false;
        return false;
    }

    bool isCyclic(int V, vector<int> adj[]) {
        // Code here
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);

        for (int i = 0; i < V; ++i) {
            if (isCyclicUtil(i, adj, visited, recStack))
                return true;
        }
        return false;
    }
};
int main() {
    int t;
    cin >> t;

    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
