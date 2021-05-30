/*      Definition for a binary tree node.
     *  * struct TreeNode {
     *  *     int val;
     *  *     TreeNode *left;
     *  *     TreeNode *right;
     *  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     *  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     *  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     *  * };
     *  */
class Solution {
    public:
        int good(TreeNode* node, int current_max){
            if(node==NULL){
                return 0;            
            }
            if(node->val >= current_max){
                current_max = node->val;
                return 1+good(node->left, current_max)+good(node->right, current_max);
            }
            return good(node->left, current_max)+good(node->right, current_max);
        }
                
        int goodNodes(TreeNode* root) {
           int cnt = 0;
           if(root==NULL){
               return 0;
           }
           int cur_max = root->val;
           cnt = good(root, cur_max);
           return cnt;
        }
};
