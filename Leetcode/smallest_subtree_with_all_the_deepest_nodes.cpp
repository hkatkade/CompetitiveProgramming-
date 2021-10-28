class Solution {
public:
    pair<int,TreeNode*> dfs(TreeNode* root){
        if(!root){
            return {0,NULL};
        }
        pair<int,TreeNode*> left=dfs(root->left);
        pair<int,TreeNode*> right=dfs(root->right);
        
        if(left.first<right.first){
            return {right.first+1,right.second};
        }
        if(left.first>right.first){
            return {left.first+1,left.second};
        }
        return {right.first+1,root};
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root){
        if(!root){
            return NULL;
        }
        pair<int,TreeNode*> p=dfs(root);
        return p.second;
    }
};

