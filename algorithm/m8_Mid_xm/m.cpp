#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <map>

using namespace std;

// Define directions: right, left, up, down
const int dx[] = {0, 0, -1, 1};
const int dy[] = {1, -1, 0, 0};

// Function to perform Breadth First Search
void bfs(vector<vector<char>>& grid, int start_x, int start_y, int dest_x, int dest_y, map<pair<int, int>, pair<int, int>>& parent) {
    int N = grid.size();
    int M = grid[0].size();
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    parent[{start_x, start_y}] = {-1, -1}; // Parent of starting position is set to (-1, -1)

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        // Stop BFS if we reach the destination
        if (x == dest_x && y == dest_y) return;

        // Explore in all four directions
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // Check if the next cell is within the bounds of the grid and is a valid cell to move
            if (nx >= 0 && nx < N && ny >= 0 && ny < M && grid[nx][ny] == '.' && parent.find({nx, ny}) == parent.end()) {
                parent[{nx, ny}] = {x, y}; // Store the parent information
                q.push({nx, ny});          // Explore next cell
            }
        }
    }
}

int main() {
    int N, M;
    // Read input N and M
    cin >> N >> M;

    // Read the grid
    vector<vector<char>> grid(N, vector<char>(M));
    int start_x, start_y, dest_x, dest_y;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> grid[i][j];
        }
    }

    // Read source and destination indices
    cin >> start_x >> start_y >> dest_x >> dest_y;

    map<pair<int, int>, pair<int, int>> parent; // Map to store parent information

    // Perform BFS from source
    bfs(grid, start_x, start_y, dest_x, dest_y, parent);

    // Trace back from destination to source to mark the shortest path with 'X'
    pair<int, int> current = {dest_x, dest_y};

    while (current != make_pair(-1, -1)) {
        grid[current.first][current.second] = 'X'; // Mark the path with 'X'
        current = parent[current]; // Move to the parent cell
    }

    // Output the grid
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
