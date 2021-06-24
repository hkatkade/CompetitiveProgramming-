#include<bits/stdc++.h>
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(inorder,preorder,0,inorder.size()-1,0,preorder.size()-1);
    }
    
    TreeNode* helper(vector<int>& inorder,vector<int>& preorder,int inS,int inE,int preS,int preE){
        
        if(preE>=preorder.size() || inE>=inorder.size() || inS>=inorder.size()||preS>=preorder.size()){
            return NULL;
        }
        if(inS>inE || preS>preE){
            return NULL;
        }
        int rootval=preorder[preS];
        TreeNode* root = new TreeNode();
        root->val=rootval;
        int rootInd=find(inorder.begin(),inorder.end(),rootval)-inorder.begin();
        int linS=inS;
        int linE=rootInd-1;
        int lpreS=preS+1;
        int lpreE=(linE-linS)+lpreS;
        int rinS=rootInd+1;
        int rinE=inE;
        int rpreS=lpreE+1;
        int rpreE=preE;
        root->left=helper(inorder,preorder,linS,linE,lpreS,lpreE);
        root->right=helper(inorder,preorder,rinS,rinE,rpreS,rpreE);
        return root;   
    }  
};