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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int c=0;
        if(root==nullptr){
            return 0;
        }
        if(root->val>=low && root->val<=high){
            c+=root->val;
        }
        c+=rangeSumBST(root->left,low,high);
        c+=rangeSumBST(root->right,low,high);
        return c;

    }
};