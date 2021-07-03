class Solution
{
    public:
    int sum(Node* root){
        if(root==NULL){
            return 0;
        }
        int s=0;
        return sum(root->left)+root->data+sum(root->right);;
        
    }
    bool isSumTree(Node* root){
        int ls,rs;
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return 1;
        }
        ls=sum(root->right);
        rs=sum(root->left);
        if((ls+rs)==root->data && isSumTree(root->left) && isSumTree(root->right)){
            return 1;
        }
        return 0;
    }
};