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
    vector<int> v;
void post_order(TreeNode* root){
    if(root==NULL) return;
    post_order(root->left);
    post_order(root->right);
    v.push_back(root->val);
}
    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr) {
            return true; // An empty tree is considered univalued.
        }
        int x= root->val;
        post_order(root);

        for(int c:v){
            if (c != x) return false;
        }

    return true;

    }
};
