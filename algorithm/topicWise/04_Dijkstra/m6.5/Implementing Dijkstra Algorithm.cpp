#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find the shortest distance of all the vertices
    //from the source vertex S.

    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        // Code here
        vector<int> dist(V, INT_MAX); // Initialize distances with infinity
        vector<bool> visited(V, false); // Keep track of visited vertices

        dist[S] = 0; // Distance from source to itself is 0

        // Min-heap to store vertices and their distances
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, S}); // Push source vertex with distance 0

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            // If the vertex is already visited, skip
            if (visited[u])
                continue;

            visited[u] = true; // Mark the vertex as visited

            // Update distances of adjacent vertices
            for (auto& neighbor : adj[u]) {
                int v = neighbor[0]; // Vertex
                int weight = neighbor[1]; // Weight

                if (!visited[v] && dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    pq.push({dist[v], v});
                }
            }
        }

        return dist;
    }
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj[V];

        for (int i = 0; i < E; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w}); // Considering the graph is undirected
        }

        int S;
        cin >> S;

        Solution obj;
        vector<int> res = obj.dijkstra(V, adj, S);

        for (int i = 0; i < V; ++i)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
