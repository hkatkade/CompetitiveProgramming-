class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int sz=n;
            vector<double> temp;
            double sum=0;
            while(n--){
                TreeNode *curr=q.front();
                q.pop();
                sum+=double(curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            ans.push_back((sum)/double(sz));
        }
        return ans;
    }
};