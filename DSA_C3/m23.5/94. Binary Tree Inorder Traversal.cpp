
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderRecursive(root, result);
        return result;
    }

    void inorderRecursive(TreeNode* root, vector<int>& result) {
        if (root == NULL) {
            return;
        }
        inorderRecursive(root->left, result);

        result.push_back(root->val);

        inorderRecursive(root->right, result);
    }
};

// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> result;
//         stack<TreeNode*> nodeStack;

//         while (root != NULL || !nodeStack.empty()) {
//             // Traverse left subtree and push nodes onto the stack
//             while (root != NULL) {
//                 nodeStack.push(root);
//                 root = root->left;
//             }

//             // Process current node
//             root = nodeStack.top();
//             nodeStack.pop();
//             result.push_back(root->val);


//             root = root->right;
//         }

//         return result;
//     }
// };
