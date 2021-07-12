class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int> v;
            while(n--){
                TreeNode* curr=q.front();
                q.pop();
                if(curr){
                    v.push_back(curr->val);
                }
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            ans.push_back(v[v.size()-1]);
        }
        return ans;
        
    }
};