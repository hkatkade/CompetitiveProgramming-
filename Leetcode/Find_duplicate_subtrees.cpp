class Solution {
public:
    unordered_map<string,int> m;
    vector<TreeNode*> ans;
    string inorder(TreeNode* root){
        if(!root){
            return "";
        }
        string l=inorder(root->left);
        string r=inorder(root->right);
        string curr="["+l+to_string(root->val)+r+"]";
        if(m[curr]==1){
            ans.push_back(root);
        }
        m[curr]++;
        return curr;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        inorder(root);
        return ans;
    }
};