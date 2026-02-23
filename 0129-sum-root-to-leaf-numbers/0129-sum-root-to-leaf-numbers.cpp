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
int sum=0,finres=0;
    int sumNumbers(TreeNode* root) {
        if(root==nullptr){
            return 0;
        }
        sum=sum*10+root->val;
        if(root->left==nullptr && root->right==nullptr){
            finres+=sum;
            
        }
        sumNumbers(root->left);
        sumNumbers(root->right);
        sum=sum/10;
        return finres;
    }
};