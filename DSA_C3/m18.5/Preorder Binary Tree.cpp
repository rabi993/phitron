vector<int > v;
void pre_order(TreeNode<int> *root){
    if(root==NULL) return;
     v.push_back(root->data);
    //cout << root->data << " ";
    pre_order(root->left);
    pre_order(root->right);

}
vector<int> preOrder(TreeNode<int> * root){
    // Write your code here.
    v.clear();
    pre_order(root);
    return v;
}

