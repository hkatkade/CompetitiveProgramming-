class Solution{
    public:
        int total(Node* root){
            if(root==NULL){
                return 0;
            }
            return root->val + total(root->left) + total(root->right);
        }
        int rigthUCsum(Node* root){
            if(root->left==NULL && root->right==NULL){
                return root->val;
            }
            if(root->right!=NULL){
                return root->val + leftUCsum(root->right);
            }
            else{
                return root->val + leftUCsum(root->left);
            }
        }
        int leftUCsum(Node* root){
            if(root->left==NULL && root->right==NULL){
                return root->val;
            }
            if(root->left!=NULL){
                return root->val + leftUCsum(root->left);
            }
            else{
                return root->val + leftUCsum(root->right);
            }
        }
        int uncoverSum(Node* root){
            if(root->left!=NULL)
                int lus = leftUCsum(root->left);
            if(root->right!=NULL)
                int rus = rightUCsum(root->right);

            return root->val + lus + rus;
        }
        bool isSumSame(Node* root){
            int UCsum=uncoverSum(root);
            int totalSum=total(root);
            return (UCsum == (totalSum - UCsum));
        }
}