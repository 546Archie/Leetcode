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
    int maxD(TreeNode* root){
        if(root==NULL)
            return 0;
        else
            return (1+max(maxD(root->left), maxD(root->right)));
    }
    
    void level(TreeNode* root, int cur, int total, vector<int> &x){
        cout<<"cur: "<<cur<<", total: "<<total<<endl;
        if(root==NULL){
            cout<<"return"<<endl;
            return;            
        }
        cout<<"root->val: "<<root->val<<endl;
        if(cur==total){
            cout<<"push_back: "<<root->val<<endl;
            x.push_back(root->val);
        }
        else{
            cout<<"left: "<<endl;
            level(root->left, cur, total-1, x);
            cout<<"right: "<<endl;
            level(root->right, cur, total-1, x);
        }
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        //get the max level
        int n = maxD(root);
        
        //return ans
        vector<vector<int>> ret;
        
        //start from level one
        int i = 1;
        while(i<=n){
            vector<int> cur;
            level(root, i, n, cur);
            ret.push_back(cur);
            i++;
        }
        return ret;
    }
};
