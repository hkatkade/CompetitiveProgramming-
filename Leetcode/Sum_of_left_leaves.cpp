class Solution {
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        
        if(root->left && root->left->left==NULL && root->left->right==NULL){
            sum+=root->left->val;
            // sum+=root->left->val+sumOfLeftLeaves(root->right);
        }   
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return sum;
    }
};