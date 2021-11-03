class Solution {
public:
    long long int MOD=1e9+7;
    long long int total=0;
    priority_queue<long long int> pq;
    int helper(TreeNode* root,int sum){
        if(!root){
            return 0;
        }
        int tempsum=root->val+helper(root->left,sum)+helper(root->right,sum);
        pq.push((((total-tempsum))*(tempsum)));
        return tempsum;
        
    }
    // void dfs(TreeNode* root){
    //     if(!root){
    //         return;
    //     }
    //     total+=root->val;
    //     dfs(root->left);
    //     dfs(root->right);
    // }
    int maxProduct(TreeNode* root) {
        if(!root){
            return 0;
        }
        total=helper(root,0);
        // cout<<total;
        helper(root,0);
        // while(!pq.empty()){
        //     cout<<pq.top()<<" ";
        //     pq.pop();
        // }
        long long int ans=pq.top();
        return (int)(ans%MOD);
    }
};




