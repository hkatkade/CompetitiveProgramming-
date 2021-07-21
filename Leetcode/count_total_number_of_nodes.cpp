/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
// O(n)
class Solution {
public:
    int c=0;
    int countNodes(TreeNode* root) {
        if(!root){
            return 0;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
        
    }
};
// O(logN * logN)
class Solution{
    public:
        int countNodes(TreeNode* root){
            if(!root){
                return 0;
            }
            TreeNode* l=root->left;
            int lev_l=1;
            while(l){
                l=l->left;
                lev_l++;
            }
            TreeNode* r=root->right;
            int lev_r=1;
            while(r){
                r=r->right;
                lev_r++;
            }
            if(lev_l==lev_r){
                return pow(2,lev_l)-1;
            }
            return 1+countNodes(root->left)+countNodes(root->right);
            
        }
};