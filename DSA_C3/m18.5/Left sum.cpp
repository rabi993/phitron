
long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.

if (root ==NULL) {

return 0;

}

long long sum = leftSum(root->left) + leftSum(root->right);

if (root->left != NULL) {

sum += root->left->data;

}

return sum;
}
