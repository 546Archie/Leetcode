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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        queue<TreeNode*> r;
        r.push(root);
        TreeNode* tmp;
        vector<int> sym;
        while(!r.empty()){
            int n = sym.size();
            //cout<<"n: "<<n<<endl;
            for(int i = 0 ; i < n/2 ; i++){
                cout<<sym[i]<<" "<<sym[i+(n/2)]<<endl;
                if(sym[i]!=sym[n-1-i])
                    return false;
            }
            sym.clear();
            
            n = r.size();
            for(int i = 0 ; i < n ; i++){
                tmp = r.front();
                r.pop();
                if(tmp->right!=NULL){
                    r.push(tmp->right);
                    sym.push_back(tmp->right->val);
                }
                else
                    sym.push_back(-1);
                if(tmp->left!=NULL){
                    r.push(tmp->left);                                    
                    sym.push_back(tmp->left->val);
                }
                else
                    sym.push_back(-1);

            }
        }
        return true;
    }
};
