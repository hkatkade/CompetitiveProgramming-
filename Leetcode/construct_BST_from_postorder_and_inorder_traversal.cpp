class Solution {
public:
    TreeNode* helper(vector<int>& inorder,vector<int>& postorder,int inS,int inE,int poS,int poE){
        if(inE>=inorder.size() || poE>=postorder.size() || inS>=inorder.size() || poS>=postorder.size()){
            return NULL;
        }
        if(inS>inE || poS>poE){
            return NULL;
        }
        int rootval = postorder[poE];
        TreeNode* root = new TreeNode(rootval);
        int rootInd = find(inorder.begin(),inorder.end(),rootval)-inorder.begin();
        int linS=inS;
        int linE=rootInd-1;
        int lpoS=poS;
        int lpoE=linE-linS+lpoS;
        int rinS=rootInd+1;
        int rinE=inE;
        int rpoS=lpoE+1;
        int rpoE=poE-1;//lpoE+(rinE-rinS)+1;
        root->left=helper(inorder,postorder,linS,linE,lpoS,lpoE);
        root->right=helper(inorder,postorder,rinS,rinE,rpoS,rpoE);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};