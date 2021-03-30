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
    TreeNode* cur_root(int left, int right, vector<int> &n){
        
        //out of boundary
        if(left > right)
            return NULL;
        
        //this subtree is over
        if(left==right)
            return new TreeNode(n[left]);
        
        int mid = (left+right)/2;
        
        //find the current root between left and right
        TreeNode* r = new TreeNode(n[mid]);
        
        //find current root's left and right subtree
        r->left = cur_root(left, mid-1, n);
        r->right = cur_root(mid+1, right, n);
        
        return r;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return cur_root(0, nums.size()-1, nums);
    };
};
