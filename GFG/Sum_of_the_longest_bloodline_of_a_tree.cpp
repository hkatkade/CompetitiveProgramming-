class Solution
{
    // pair -> sum,height
public:
    int ans=0,curr_h=0;
    void dfs(Node *root,pair<int,int> p){
        if(!root){
            return;
        }
        int sum=p.first+root->data;
        if(p.second >= curr_h){
            curr_h=p.second;
            ans=sum;
        }
        dfs(root->left,make_pair(sum,p.second+1));
        dfs(root->right,make_pair(sum,p.second+1));
        
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        if(!root){
            return 0;
        }
        pair<int,int> p=make_pair(0,0);
        dfs(root,p);
        return ans;
        //code here
    }
};