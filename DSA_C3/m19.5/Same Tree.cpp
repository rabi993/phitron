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
    vector<int> v1, v2;

    void pre_order(TreeNode* node, vector<int>& v) {
        if (node == nullptr) {
            v.push_back(INT_MIN); // Use a special value to represent NULL nodes.
            return;
        }
        v.push_back(node->val);
        pre_order(node->left, v);
        pre_order(node->right, v);
    }

    void post_order(TreeNode* node, vector<int>& v) {
        if (node == nullptr) {
            v.push_back(INT_MIN); // Use a special value to represent NULL nodes.
            return;
        }
        post_order(node->left, v);
        post_order(node->right, v);
        v.push_back(node->val);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        pre_order(p, v1);
        pre_order(q, v2);

        if (v1 != v2) {
            return false;
        }

        v1.clear();
        v2.clear();

        post_order(p, v1);
        post_order(q, v2);

        return v1 == v2;
    }
};
