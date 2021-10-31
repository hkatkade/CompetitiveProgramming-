class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(!root){
            return NULL;
        }
        if(depth==1){
            TreeNode* newroot=new TreeNode(val);
            newroot->left=root;
            return newroot;
        }
        queue<TreeNode*> q;
        q.push(root);
        int d=1;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                TreeNode *curr=q.front();
                q.pop();
                if(depth==d+1){
                    TreeNode *new_node_l=new TreeNode(val);
                    TreeNode *new_node_r=new TreeNode(val);
                    TreeNode *ltemp=curr->left;
                    TreeNode *rtemp=curr->right;
                    curr->left=new_node_l;
                    curr->right=new_node_r;
                    new_node_l->left=ltemp;
                    new_node_r->right=rtemp;
                }
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            d++;
        }
        return root;
    }
};