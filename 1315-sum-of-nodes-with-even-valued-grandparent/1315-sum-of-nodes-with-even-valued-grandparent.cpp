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
    int sum(TreeNode* root,TreeNode* parent,TreeNode* grandparent){
        if(root==nullptr){
            return 0;
        }
        int s=0;
        if(grandparent!=nullptr && grandparent->val%2==0){
            s+=root->val;
        }
        s+=sum(root->left,root,parent);
        s+=sum(root->right,root,parent);
        return s;
    }
    int sumEvenGrandparent(TreeNode* root) {
        return sum(root,nullptr,nullptr);

    }
};