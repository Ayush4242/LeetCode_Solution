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
    TreeNode* reverseOddLevels(TreeNode* root) {
        int level=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<TreeNode*>ans;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                ans.push_back(node);
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(level%2==1){
                int l=0,r=ans.size()-1;
                while(l<r){
                    swap(ans[l]->val,ans[r]->val);
                    l++;
                    r--;
                }
            }
            level++;
        }
        return root;
    }
};