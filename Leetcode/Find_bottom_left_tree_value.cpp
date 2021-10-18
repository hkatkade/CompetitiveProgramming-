class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans ;
        while(!q.empty()){
            int c =q.size();
            ans = q.front()->val;
            while(c--){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
        }
        return ans;
    }
};