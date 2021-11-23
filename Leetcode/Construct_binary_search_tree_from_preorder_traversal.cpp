class Solution {
public:
    TreeNode* helper(TreeNode* &root,int val){
        if(!root){
            return root=new TreeNode(val);
        }
        if(root->val>val){
            root->left=helper(root->left,val);
        }
        else{
            root->right=helper(root->right,val);    
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
        for(auto &i:preorder){
            helper(root,i);
        }
        return root;
    }
};

class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(preorder,i,INT_MAX);
    }
    TreeNode * build(vector<int> & preorder, int & i,int bound){
        if(i>=preorder.size() || preorder[i]>bound) return NULL;
        TreeNode * root=new TreeNode(preorder[i++]);
        root->left=build(preorder,i,root->val);
        root->right=build(preorder,i,bound);
        return root;
    }
};