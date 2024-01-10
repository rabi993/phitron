
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> v;
    if (root == NULL) return v;

    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        v.push_back(f->val);


        // 3. tar children gulo ke rakha
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return v;
}
