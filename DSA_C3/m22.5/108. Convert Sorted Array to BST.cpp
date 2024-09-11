
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
        TreeNode* sortedArrayToBST(vector<int>& nums) {

        if (nums.empty()) {
            return NULL;
        }

        // Build the balanced BST recursively
        return sortedArrayToBSTRecursive(nums, 0, nums.size() - 1);
    }

private:
    TreeNode* sortedArrayToBSTRecursive(vector<int>& nums, int left, int right) {

        if (left > right) {
            return NULL;
        }

        // Choose the middle element as the root
        int mid = left + (right - left) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        // Recursively build left and right subtrees
        root->left = sortedArrayToBSTRecursive(nums, left, mid - 1);
        root->right = sortedArrayToBSTRecursive(nums, mid + 1, right);

        return root;
    }
};
