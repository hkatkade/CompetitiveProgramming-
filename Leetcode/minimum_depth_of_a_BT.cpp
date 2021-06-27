class Solution {
public:
    int ans=INT_MAX,h=0;
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        h++;
        if(root->left==NULL && root->right==NULL){
            ans=min(ans,h);
        }
        minDepth(root->left);
        minDepth(root->right);
        h--;
        return ans;
        
    }
};