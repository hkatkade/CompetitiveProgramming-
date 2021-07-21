class Solution {
public:
    bool helper(TreeNode* root,TreeNode* mini=NULL,TreeNode* maxi=NULL){
        if(!root){
            return true;
        }
        if(mini!=NULL && root->val <= mini->val){
            return false;
        }
        if(maxi!=NULL && root->val >= maxi->val){
            return false;
        }
        return (helper(root->left,mini,root) && helper(root->right,root,maxi));
        
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL){
            return true;
        }
        return (helper(root,NULL,NULL));
    }
};