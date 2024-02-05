#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int dijkstra(const vector<vector<int>>& graph, int n, int s, int f) {
    vector<int> dist(n, INF);
    vector<bool> visited(n, false);

    dist[s] = 0;

    for (int i = 0; i < n; ++i) {
        int u = -1;
        // Find the unvisited vertex with the minimum distance
        for (int j = 0; j < n; ++j) {
            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }

        // If there are no more reachable vertices, break the loop
        if (dist[u] == INF) break;

        visited[u] = true;

        // Update distances of adjacent vertices of u
        for (int v = 0; v < n; ++v) {
            if (!visited[v] && graph[u][v] >= 0 && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    return dist[f] == INF ? -1 : dist[f];
}

int main() {
    int n, s, f;
    cin >> n >> s >> f;

    // Read the adjacency matrix
    vector<vector<int>> graph(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    // Find the shortest distance from s to f
    int shortest_distance = dijkstra(graph, n, s - 1, f - 1);

    // Output the result
    cout << shortest_distance << endl;

    return 0;
}
