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
    //BFS
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ret = 0;
        queue<TreeNode*> r;
        r.push(root);
        while(!r.empty()){
            ++ret;
            int n = r.size();
            for(int i = 0 ; i < n ; i++){
                TreeNode* tmp = r.front();
                r.pop();
                if(tmp->left!=NULL)
                    r.push(tmp->left);
                if(tmp->right!=NULL)
                    r.push(tmp->right);
            }
        }
        return ret;
    }
};
