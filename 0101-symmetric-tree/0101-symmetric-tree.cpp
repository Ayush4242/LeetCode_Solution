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
    bool ismirror(TreeNode* lefts,TreeNode* rights) {
        if(lefts==nullptr && rights==nullptr){
            return true;
        }
        if(lefts==nullptr || rights==nullptr){
            return false;
        }
        if(lefts->val!=rights->val){
            return false;
        }
        return ismirror(lefts->left,rights->right)&& ismirror(lefts->right,rights->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        TreeNode* lefts=root->left;
        TreeNode* rights=root->right;
        return ismirror(lefts,rights);
        
    }
};