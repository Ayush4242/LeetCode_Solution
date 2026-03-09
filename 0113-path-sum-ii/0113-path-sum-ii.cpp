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
    vector<int>res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        dfs(root,targetSum,ans);
        return ans;
    }
    void dfs(TreeNode* root, int targetSum,vector<vector<int>>&ans){
        if(root==nullptr){
            return;
        }
        res.push_back(root->val);
        if(root->left==nullptr && root->right==nullptr && targetSum==root->val){
            ans.push_back({res});
        }
        dfs(root->left,targetSum-root->val,ans);
        dfs(root->right,targetSum-root->val,ans);
        res.pop_back();
    }

};