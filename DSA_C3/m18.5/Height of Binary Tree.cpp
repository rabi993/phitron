
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.

    if (root == NULL)
        return 0;
    int l = heightOfBinaryTree(root->left);
    int r = heightOfBinaryTree(root->right);
    return max(l, r) + 1;

}
