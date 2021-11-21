class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root){
            return 0;
        }    
        int k=1,maxi=INT_MIN,lvl=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            int sum=0;
            while(n--){
                TreeNode* curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            if(sum>maxi){
                    maxi=sum;
                    lvl=k;
            }
            k++;
        }
        return lvl;
    }
};