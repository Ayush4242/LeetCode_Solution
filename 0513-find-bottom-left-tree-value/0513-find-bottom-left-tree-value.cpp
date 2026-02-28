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
int maxi=-1,ans=-1;
    void dfs(TreeNode* root,int depth){
        if(root==nullptr){
            return;
        }
        if(depth>maxi){
            maxi=depth;
            ans=root->val;
        }
        dfs(root->left,depth+1);
        dfs(root->right,depth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int depth=0;
        dfs(root,depth);
        return ans;
    }
};