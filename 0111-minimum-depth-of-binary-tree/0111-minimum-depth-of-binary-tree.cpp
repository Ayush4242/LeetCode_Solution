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
    int mini=INT_MAX;
    int minDepth(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        return traverse(root,0);
        // mini=min(mini,res);
        // return mini;

    }
    int traverse(TreeNode* root,int c){
        if(root==nullptr){
            return INT_MAX;
        }
        if(root->left==nullptr && root->right==nullptr){
            return c+1;
        }
        return min(traverse(root->left,c+1),
        traverse(root->right,c+1));
    }
};