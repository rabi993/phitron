
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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> seenValues;
        return findTargetHelper(root, k, seenValues);
    }


    bool findTargetHelper(TreeNode* node, int k, unordered_set<int>& seenValues) {
        if (node == NULL) {
            return false;
        }

        // Check if there exists a node with value k - node->val in the set
        if (seenValues.count(k - node->val) > 0) {
            return true;
        }

        // Add the current node's value to the set
        seenValues.insert(node->val);

        // Recursively check left and right subtrees
        return findTargetHelper(node->left, k, seenValues) || findTargetHelper(node->right, k, seenValues);
    }
};
