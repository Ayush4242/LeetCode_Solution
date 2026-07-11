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
    int maxi=INT_MIN,sum=0;
    int traverse(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int lr=max(0,traverse(root->left));
        int rh=max(0,traverse(root->right));
        sum=(lr+rh+root->val);
        maxi=max(maxi,sum);
        return root->val+max(lr,rh);
    }
    int maxPathSum(TreeNode* root) {
        traverse(root);       
        return maxi;
    }
};