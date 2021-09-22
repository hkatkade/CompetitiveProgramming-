class Solution {
public:
    void inOrderTraversal(TreeNode *root,vector<int> &v){
        if(root==NULL)return;
        inOrderTraversal(root->left,v);
        v.push_back(root->val);
        inOrderTraversal(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inOrderTraversal(root,v);
        int n=v.size();
        int mindiff=INT_MAX;
        for(int i=0;i<n-1;++i){
            mindiff=min(mindiff,v[i+1]-v[i]);
        }
        return mindiff;
    }
};