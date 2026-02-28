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
int c=0;
    void calc(TreeNode* root){
        if(root==nullptr){
            return ;
        }
        c++;
        calc(root->left);
        calc(root->right);
        // return c;
    }
    int countNodes(TreeNode* root) {
        calc(root);
        return c;

    }
};