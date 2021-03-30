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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        if(root==NULL)
            return ret;
        queue<TreeNode*>r;
        vector<int> cur;
        r.push(root);
        cur.push_back(root->val);
        ret.push_back(cur);
        TreeNode* tmp;
        while(!r.empty()){
            int n = r.size();
            vector<int> c;
            for(int i = 0 ; i < n ; i++){
                tmp = r.front();
                r.pop();
                if(tmp->left){
                    r.push(tmp->left);
                    c.push_back(tmp->left->val);
                }
                if(tmp->right){
                    r.push(tmp->right);
                    c.push_back(tmp->right->val);                    
                }
            }
            ret.push_back(c);
        }
        ret.pop_back();
        reverse(ret.begin(),ret.end());
        return ret;
    }
};
