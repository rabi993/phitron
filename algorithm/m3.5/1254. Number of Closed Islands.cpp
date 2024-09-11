class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int closedIslands = 0;
        // DFS to mark all connected 0s as visited
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0 && (i == 0 || i == m - 1 || j == 0 || j == n - 1)) {
                    // If we encounter a 0 on the boundary, it cannot form a closed island
                    markVisited(grid, i, j);
                }
            }
        }
        // Count the number of closed islands
        for (int i = 1; i < m - 1; ++i) {
            for (int j = 1; j < n - 1; ++j) {
                if (grid[i][j] == 0) {
                    markVisited(grid, i, j);
                    closedIslands++;
                }
            }
        }
        return closedIslands;
    }
    // DFS to mark connected 0s as visited
    void markVisited(vector<vector<int>>& grid, int row, int col) {
        if (row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size() || grid[row][col] != 0) {
            return;
        }
        grid[row][col] = 2; // Mark as visited
        // DFS in all four directions
        markVisited(grid, row + 1, col);
        markVisited(grid, row - 1, col);
        markVisited(grid, row, col + 1);
        markVisited(grid, row, col - 1);
    }
};
