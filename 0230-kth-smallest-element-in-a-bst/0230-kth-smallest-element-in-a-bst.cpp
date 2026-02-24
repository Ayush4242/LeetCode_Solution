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
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        calc(root,k,v);
        return v[k-1]; 

    }
    void calc(TreeNode* root, int k,vector<int>&v){
        if(root==nullptr){
            return;
        }
        calc(root->left,k,v);
        v.push_back(root->val);
        calc(root->right,k,v);
    }
};