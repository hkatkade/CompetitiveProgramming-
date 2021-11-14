long long ans=0;
long long dfs(Node *root,long long sum){
    if(!root){
        return 0;
    }
    sum=sum*10+root->data;
    if(root->right==NULL && root->left==NULL){
        return sum;
    }
    return dfs(root->left,sum)+dfs(root->right,sum);
    
}

long long treePathsSum(Node *root)
{
    if(!root){
        return 0;
    }
    long long sum=0;
    return dfs(root,sum);
}