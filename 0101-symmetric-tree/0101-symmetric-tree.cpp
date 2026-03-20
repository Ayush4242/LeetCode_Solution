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
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return false;
        }
        return traverse(root->left,root->right);
    }
    bool traverse(TreeNode* leftnode,TreeNode* rightnode) {
        if(leftnode==nullptr && rightnode==nullptr){
            return true;
        }
        if(leftnode==nullptr || rightnode==nullptr){
            return false;
        }
        return (leftnode->val==rightnode->val && traverse(leftnode->left,rightnode->right)&& traverse(leftnode->right,rightnode->left));
           

        
        


    }
};