class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
        if(!root){
            return;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            Node *prev=NULL;
            while(n--){
                Node *curr=q.front();
                q.pop();
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                if(prev!=NULL){
                    prev->nextRight=curr;
                }
                prev=curr;
            }
            prev->nextRight=NULL;
        }
       // Your Code Here
    }    
      
};