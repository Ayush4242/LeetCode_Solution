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
    int ans;
    void traverse(TreeNode* root,int &sum,int &c){
        if(root==nullptr){
            sum=0,c=0;
            return ;
        }
        int leftsum=0,leftc=0,rightc=0,rightsum=0;
        traverse(root->left,leftsum,leftc);
        traverse(root->right,rightsum,rightc);
        sum=root->val+leftsum+rightsum;
        c=leftc+rightc+1;
        if(sum/c==root->val){
            ans++;
        }
        
    }
    int averageOfSubtree(TreeNode* root) {
        int sum=0,c=0;
        traverse(root,sum,c);
        return ans;
        
    }

};