class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) {
            return image; // No need to flood fill if the starting pixel already has the target color
        }
        fill(image, sr, sc, image[sr][sc], color);
        return image;
    }

    void fill(vector<vector<int>>& image, int r, int c, int originalColor, int newColor) {
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != originalColor) {
            return;
        }
        image[r][c] = newColor;
        fill(image, r + 1, c, originalColor, newColor); // Down
        fill(image, r - 1, c, originalColor, newColor); // Up
        fill(image, r, c + 1, originalColor, newColor); // Right
        fill(image, r, c - 1, originalColor, newColor); // Left
    }
};
