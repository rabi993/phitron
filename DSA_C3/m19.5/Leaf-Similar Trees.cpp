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
vector<int > v1;
void pre_order1(TreeNode *root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
         v1.push_back(root->val);
     }
    //cout << root->data << " ";
    pre_order1(root->left);
    pre_order1(root->right);

}
vector<int > v2;
void pre_order2(TreeNode *root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
         v2.push_back(root->val);
    }
    //cout << root->data << " ";
    pre_order2(root->left);
    pre_order2(root->right);

}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        pre_order1(root1);
        pre_order2(root2);
        if(v1 != v2) return false;
        else{
            return true;
        }

    }
};
