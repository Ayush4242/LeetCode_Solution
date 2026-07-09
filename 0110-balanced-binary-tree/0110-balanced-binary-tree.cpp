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
    bool isBalanced(TreeNode* root) {
        return height(root)!=-1;
    }
    int height(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int lr=height(root->left);
        if(lr==-1){
            return -1;
        }
        int rh=height(root->right);
        if(rh==-1){
            return -1;
        }
        if(abs(lr-rh)>1){
            return -1;
        }
        return 1+max(lr,rh);
    }
};