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
 #include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {

        TreeNode* dummy = new TreeNode();
        TreeNode* current = dummy;


        inorderTraversal(root, current);

        return dummy->right;
    }


    void inorderTraversal(TreeNode* node, TreeNode*& current) {
        if (node) {
            inorderTraversal(node->left, current);

            node->left = nullptr;
            current->right = node;
            current = node;

            inorderTraversal(node->right, current);
        }
    }
};

///////////////////////
// Example usage:
int main() {
    Solution solution;

    // Create a sample BST
    TreeNode* root = new TreeNode(5, new TreeNode(3, new TreeNode(2), new TreeNode(4)), new TreeNode(6));

    // Rearrange the BST
    TreeNode* result = solution.increasingBST(root);

    // Output the values in the rearranged tree
    while (result) {
        std::cout << result->val << " ";
        result = result->right;
    }

    return 0;
}
