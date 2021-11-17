class Solution {
public:
//     1 covered   1
//    -1 need camera  2
//     0 have camera  3
 
    int cam=0;
    int helper(TreeNode* root){
        if(!root){
            return 1;
        }
        int r=helper(root->right);
        int l=helper(root->left);
        if(l==-1 || r==-1){
            cam++;
            return 0;
        }
        if(l==0 || r==0){
            return 1;
        }
        return -1;
    }
int minCameraCover(TreeNode* root) {
        if(!root){
            return 0;
        }
        int ans = helper(root);
        cout<<ans<<endl;
        if(ans==-1){
            cam++;
            return cam;
        }
        return cam;
    }
};