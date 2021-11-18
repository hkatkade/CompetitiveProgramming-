class Solution{
  public:
    /*You are required to complete this method*/
    unordered_set<int> s;
    void dfs(Node *root,int h){
        if(!root){
            return;
        }
        if(!root->right && !root->left){
            // cout<<h<<endl;
            s.insert(h);
        }
        
        dfs(root->left,h+1);
        dfs(root->right,h+1);
    }
    bool check(Node *root){
        //Your code here
        if(!root){
            return true;
        }
        dfs(root,0);
        return s.size()==1;
    }
};