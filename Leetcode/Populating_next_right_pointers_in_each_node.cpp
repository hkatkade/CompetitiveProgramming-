class Solution {
public:
    Node* connect(Node* root) {
        if(!root){
            return NULL;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            Node *temp=NULL;
            bool ok=false;
            while(n--){
                Node *curr=q.front();
                q.pop();
                if(ok){
                    temp->next=curr;
                }
                else{
                    ok=true;
                }
                temp=curr;
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);            
            }
        }
        return root;
    }
};