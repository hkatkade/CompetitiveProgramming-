Node* LCA(Node *root, int a, int b){
    
    if(!root || root->data==a || root->data==b){
        return root;
    }
    Node *l=LCA(root->left,a,b);
    Node *r=LCA(root->right,a,b);
    if(!l){
        return r;
    }
    else if(!r){
        return l;
    }
    else{
        return root;
    }
    
   //Your code here
}