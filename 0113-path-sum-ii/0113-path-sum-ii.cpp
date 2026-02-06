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
    vector<vector<int>>res;
    vector<int>res1;       
    void check(TreeNode* root, int targetSum){
        if(root== nullptr){
            return ;
        }
        res1.push_back(root->val);       
        
        if(root->left==nullptr && root->right==nullptr && targetSum==root->val){
            res.push_back(res1);
        }
        pathSum(root->left,targetSum-root->val);
        pathSum(root->right,targetSum-root->val);
        res1.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        check(root,targetSum);
        return res;

    }
    
};