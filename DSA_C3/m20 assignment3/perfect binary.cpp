
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin>> l >> r;
        Node *myLeft;
        Node *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}

int heightOfBinaryTree(Node *root)
{

    if(root == NULL)
        return 0;
    int l = heightOfBinaryTree(root->left);
    int r = heightOfBinaryTree(root->right);
    return max(l, r) + 1;

}

int countAllNodes(Node *root) {
    if(root == NULL)
        return 0;

    int leftCount = countAllNodes(root->left);
    int rightCount = countAllNodes(root->right);

    return 1 + leftCount + rightCount;

}

int main()
{
    Node *root = input_tree();
    int x=  countAllNodes(root);
    int y =heightOfBinaryTree(root);
    int z=pow(2, y) - 1;
    //cout<< x << endl;
    //cout<< y << endl;
    //cout<< z << endl;
    if(z==x){

        cout<< "YES" << endl;
    }
    else {
        cout<< "NO" << endl;
    }
    return 0;
}
