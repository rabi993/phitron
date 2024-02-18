#include <bits/stdc++.h>
using namespace std;


vector<pair<int,int>> d ={{0,1},{0,-1},{-1,0},{1,0}};

int N, M;

// Function to perform Depth First Search
void dfs(vector<vector<char>>& maze, int x, int y) {
    // Base case: If we reach the exit 'D', return
    if (maze[x][y] == 'D') return;

    // Mark current cell as visited
    maze[x][y] = 'X';

    // Explore in all four directions
    for (int i = 0; i < 4; ++i) {
        int nx = x + d[i].first;
        int ny = y + d[i].second;

        // Check if the next cell is within the bounds of the maze and is a valid cell to move
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && maze[nx][ny] == '.') {
            dfs(maze, nx, ny); // Explore recursively
        }
    }
}

int main() {
    // Read input N and M
    cin >> N >> M;

    // Read the maze
    vector<vector<char>> maze(N, vector<char>(M));
    int start_x, start_y;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
            // Find Rezia's starting position
            if (maze[i][j] == 'R') {
                start_x = i;
                start_y = j;
            }
        }
    }

    // Perform DFS from Rezia's starting position
    dfs(maze, start_x, start_y);

    // Output the final maze
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}
