class Solution {
  public:
    int dfs(Node *root){
        if(!root){
            return 0;
        }
        return root->data+dfs(root->left)+dfs(root->right);
    }
    int ls=0,rs=0;
    void toSumTree(Node *root){
        if(!root){
            return;
        }
        ls=dfs(root->left);
        rs=dfs(root->right);
        root->data=ls+rs;
        toSumTree(root->left);
        toSumTree(root->right);
        
    }
};