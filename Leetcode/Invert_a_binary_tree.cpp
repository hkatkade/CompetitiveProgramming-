class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return NULL;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                TreeNode* curr=q.front();
                q.pop();
                TreeNode* temp=curr->left;
                curr->left=curr->right;
                curr->right=temp;
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }
        return root;
    }
};