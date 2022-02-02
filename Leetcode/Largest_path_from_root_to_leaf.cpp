int solve(Tree* root) {
   if(!root){
       return 0;
   }
   return root->val+max(solve(root->left),solve(root->right));
}