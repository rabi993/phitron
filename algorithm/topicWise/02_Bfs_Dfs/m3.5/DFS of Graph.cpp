//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    // Utility function for DFS traversal
    void dfsUtil(int v, vector<int> adj[], vector<bool>& visited, vector<int>& result) {
        // Mark the current node as visited and add it to the result
        visited[v] = true;
        result.push_back(v);

        // Recur for all the vertices adjacent to this vertex
        for (int u : adj[v]) {
            if (!visited[u]) {
                dfsUtil(u, adj, visited, result);
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Create a vector to store the DFS traversal result
        vector<int> result;

        // Create a boolean array to mark visited vertices
        vector<bool> visited(V, false);

        // Perform DFS traversal starting from vertex 0
        dfsUtil(0, adj, visited, result);

        return result;
    }
};

//{ Driver Code Starts.
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
