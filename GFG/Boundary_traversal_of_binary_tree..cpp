class Solution {
public:
    vector<int> ans;
    void boundaryright(Node *root){
        if(!root){
            return;
        }
        if(root->right){
            boundaryright(root->right);
            ans.push_back(root->data);
        }
        else if(root->left){
            boundaryright(root->left);
            ans.push_back(root->data);
        }
    }
    void boundaryleft(Node *root){
        if(!root){
            return;
        }
        if(root->left){
            ans.push_back(root->data);
            boundaryleft(root->left);
        }
        else if(root->right){
            ans.push_back(root->data);
            boundaryleft(root->right);
        }
    }
    void leaf(Node *root){
        if(!root){
            return;
        }
        leaf(root->left);
        if(!root->left && !root->right){
            ans.push_back(root->data);
        }
        leaf(root->right);
    }
    vector <int> printBoundary(Node *root)
    {
        if(!root){
            return ans;
        }
        ans.push_back(root->data);
        boundaryleft(root->left);
        leaf(root->left);
        leaf(root->right);
        boundaryright(root->right);
        return ans;
    }
};