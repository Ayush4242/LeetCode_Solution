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
int calc(TreeNode* root,int maxi){
    if(root==nullptr){
            return 0;
        }
        int c=0;
        if(root->val>=maxi){
            c=1;
            maxi=root->val;           
        }
        c+=calc(root->left,maxi);
        c+=calc(root->right,maxi);
        return c;

}
    int goodNodes(TreeNode* root) {
        int maxi=calc(root,root->val);
        return maxi;
    }
};