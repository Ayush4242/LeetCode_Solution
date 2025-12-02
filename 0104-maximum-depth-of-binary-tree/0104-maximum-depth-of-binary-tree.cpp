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
    int maxDepth(TreeNode* root) {
        // int c=0;
        // if(root==nullptr){
        //     return 0;
        // }
        // queue<TreeNode*>q;
        // vector<vector<int>>ans;
        // q.push(root);
        // while(!q.empty()){
        //     int size=q.size();
        //     vector<int>level;
        //     for(int i=0;i<size;i++){
        //     TreeNode* node=q.front();
        //     q.pop();
        //     level.push_back(node->val);
        //     if(node->left!=nullptr){
        //         q.push(node->left);
        //     }
        //     if(node->right!=nullptr){
        //         q.push(node->right);
        //     }
        // }
        // ans.push_back(level);
        // c++;

        // }
        // return c;
        if(root==nullptr){
            return 0;
        }
        int goleft=maxDepth(root->left);
        int goright=maxDepth(root->right);
        return 1+max(goleft,goright);
    }
};