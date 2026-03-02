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
    bool isValidBST(TreeNode* root) {
        return calc(root,LONG_MIN,LONG_MAX);       
    }
    bool calc(TreeNode* root,long valleft,long valrig){
        if(root==nullptr){
            return true; 
        }
        if(root->val>=valrig || root->val<=valleft){
            return false;
        }
        return calc(root->left,valleft,root->val) && calc(root->right,root->val,valrig);
    }
};