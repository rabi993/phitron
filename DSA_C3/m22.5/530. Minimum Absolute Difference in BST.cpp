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
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        int prevValue = -1;

        inorderTraversal(root, minDiff, prevValue);

        return minDiff;
    }

private:
    void inorderTraversal(TreeNode* node, int& minDiff, int& prevValue) {
        if (node) {
            inorderTraversal(node->left, minDiff, prevValue);

            if (prevValue != -1) {
                minDiff = min(minDiff, abs(node->val - prevValue));
            }

            prevValue = node->val;

            inorderTraversal(node->right, minDiff, prevValue);
        }
    }
};
