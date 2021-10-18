class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int res=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int ans=0;
            while(n--){
                TreeNode *curr=q.front();
                q.pop();
                ans+=curr->val;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            res=ans;
        }
        return res;
    }
};