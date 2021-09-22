class Solution {
public:
    int helper(TreeNode* root,int &res){
        if(!root){
            return 0;
        }
        int left=helper(root->left,res);
        int right=helper(root->right,res);
        int maxValueS=max(max(left,right)+root->val,root->val);
        int maxiVal=max(maxValueS,left+right+root->val);
        res=max(maxiVal,res);
        return maxValueS;
    }
    int maxPathSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int res=INT_MIN;
        helper(root,res);
        return res;
    }
};