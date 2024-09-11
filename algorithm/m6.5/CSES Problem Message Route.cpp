#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void printRoute(const vector<int>& parent, int node) {
    if (node == -1) return;
    printRoute(parent, parent[node]);
    cout << node << " ";
}

void bfs(const vector<vector<int>>& graph, int n, int start, int end) {
    vector<bool> visited(n + 1, false);
    vector<int> parent(n + 1, -1);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        if (u == end) {
            cout << "Shortest path length: " << u << endl;
            cout << "Route: ";
            printRoute(parent, u);
            cout << endl;
            return;
        }

        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a); // Since the connections are bidirectional
    }

    // Uolevi's computer is 1 and Maija's computer is n
    bfs(graph, n, 1, n);

    return 0;
}
