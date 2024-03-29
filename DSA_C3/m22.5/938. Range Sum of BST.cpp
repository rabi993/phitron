
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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        rangeSumBSTHelper(root, low, high, sum);
        return sum;
    }

private:
    void rangeSumBSTHelper(TreeNode* node, int low, int high, int& sum) {
        if (node == NULL) {
            return;
        }

        if (node->val >= low && node->val <= high) {
            sum += node->val;
        }

        // Recursively process left and right subtrees based on the node's value
        if (node->val > low) {
            rangeSumBSTHelper(node->left, low, high, sum);
        }
        if (node->val < high) {
            rangeSumBSTHelper(node->right, low, high, sum);
        }
    }
};
