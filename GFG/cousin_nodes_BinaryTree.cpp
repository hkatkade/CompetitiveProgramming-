class solution{
    public:
        bool isCousin(Node* root,int a,int b){
            if(root==NULL){
                return false;
            }
            queue<Node*> q;
            q.push(root);
            while(!q.empty()){
                int n = q.size();
                set<int> v;
                while(n--){
                    Node* curr = q.front();
                    q.pop();
                    if(curr->left && curr->right){
                        if((curr->left->data==a && curr->right->data==b) || (curr->left->data==b && curr->right->data==a)){
                            return false;
                        }
                    }
                    if(curr->left){
                        q.push(curr->left);
                        v.insert(curr->left->data);
                    }
                    if(curr->right){
                        q.push(curr->right);
                        v.insert(curr->right->data);
                    }
                }
                if(v.find(a)!=v.end() && v.find(b)!=v.end()){
                    return true;
                }
            }
            return true;
        }

}
