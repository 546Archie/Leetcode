/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diff = INT_MAX;
    TreeNode *pre = NULL;
    void dfs(TreeNode *root){
        //go left as much as possible
        if(root->left){
            dfs(root->left);
        }
        
        //if there is a node, update the diff between node
        if(pre)
            diff = min(diff, abs(pre->val - root->val));
        //update pre node
        pre = root;
        
        //go right as much as possible
        if(root->right){
            dfs(root->right);
        }
    }
    int getMinimumDifference(TreeNode *root) {
        dfs(root);
        return diff;
    }
};
