/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int calculateTilt(TreeNode* node, int& tilt) {
        if (node == nullptr) {
            return 0;
        }

        int leftSum = calculateTilt(node->left, tilt);
        int rightSum = calculateTilt(node->right, tilt);

        tilt += abs(leftSum - rightSum); // Update the overall tilt

        return leftSum + rightSum + node->val; // Return the sum of subtree values
    }

    int findTilt(TreeNode* root) {
    int tilt = 0;
        calculateTilt(root, tilt);
        return tilt;
    }

};
