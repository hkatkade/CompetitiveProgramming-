bool isFullTree (struct Node* root){
    if(!root){
        return true;
    }
    if((!root->left && root->right) || (!root->right && root->left)){
        return false;
    }
    return isFullTree(root->left) && isFullTree(root->right);
//add code here.
}