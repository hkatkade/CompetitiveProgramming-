class Solution {
public:
    TreeNode* helper(vector<int>& nums,int start,int end){
        if(start>end){
            return NULL;
        }
        int maxi=INT_MIN;
        int ind=0;
        for(int i=start;i<=end;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                ind=i;
            }
        }
        TreeNode* root=new TreeNode(maxi);
        root->left=helper(nums,start,ind-1);
        root->right=helper(nums,ind+1,end);
        return root;
    }
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0){
            return NULL;
        }
        return helper(nums,0,nums.size()-1);
        
    }
};