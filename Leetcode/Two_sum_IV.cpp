class Solution {
public:
    unordered_map<int,int> m;
    bool findTarget(TreeNode* root, int k) {
        if(!root){
            return false;
        }
        if(m.count((k-root->val))>0){
            return true;
        }
        m[root->val]++;
        return findTarget(root->left,k) || findTarget(root->right,k);
    }
};