class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(!root){
            return false;
        }
        queue<TreeNode*> q;
        q.push(root);
        bool ok=false;
        while(!q.empty()){
            TreeNode *curr=q.front();
            q.pop();
            if(curr==NULL){
                ok=true;
            }
            else{
                if(ok){
                    return false;
                }
                q.push(curr->left);
                q.push(curr->right);
            }
        }
        return true;
    }
};