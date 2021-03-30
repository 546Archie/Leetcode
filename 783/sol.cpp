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
    int minDiffInBST(TreeNode* root) {
        dfs(root);
        return diff;
    }
};
