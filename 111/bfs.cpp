#include <limits.h>
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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*> r;
        r.push(root);
        int cnt = 0;
        TreeNode* tmp;
        while(!r.empty()){
            cnt++;
            int n = r.size();
            for(int i = 0 ; i < n ; i++){
                tmp = r.front();
                r.pop();
                if(!tmp->left && !tmp->right)
                    return cnt;
                if(tmp->left)
                    r.push(tmp->left);
                if(tmp->right)
                    r.push(tmp->right);
            }
        }
        return cnt;
    }
    
};
