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
    int deepestLeavesSum(TreeNode* root) {
        int sm=0;
        vector<vector<int>>vec;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){           
            int size=q.size();
             sm=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                sm=sm+node->val;
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            

        }
        return sm;

    }
};