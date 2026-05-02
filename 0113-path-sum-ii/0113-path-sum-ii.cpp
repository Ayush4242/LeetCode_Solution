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
    void solve(TreeNode* root, int targetSum,vector<int>&path,vector<vector<int>>&ans){
        if(root==nullptr){
            return;
        }
        path.push_back(root->val);
        targetSum-=root->val;
        if(root->left==nullptr && root->right==nullptr){
            if(targetSum==0){
                ans.push_back(path);
            }
            else{
                
                targetSum+=root->val;
            }
        }

        solve(root->left,targetSum,path,ans);
        solve(root->right,targetSum,path,ans);       
        path.pop_back(); 
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        vector<vector<int>>ans;
        solve(root,targetSum,path,ans);
        return ans;
    }

};