class Solution {
public:
    
    bool solve(TreeNode *root,long long left,long long right){
        if(root->val<=left || root->val>=right){
            return false;
        }
        if(root->left){
            if(!solve(root->left,left,root->val)){
                return false;
            }
        }
        if(root->right){
            if(!solve(root->right,root->val,right)){
                return false;
            }
        }
        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        
        return solve(root,LLONG_MIN,LLONG_MAX);
        
    }
};
