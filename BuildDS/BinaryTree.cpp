#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
};
Node* newNode(int data){
    Node* temp = new Node;
    temp->val = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
bool isSame(Node* root1, Node* root2){
    
}
int main(){
    Node* root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->right->left = newNode(6);
    root1->right->right = newNode(7);
 
    Node* root2 = newNode(0);
    root2->left = newNode(1);
    root2->right = newNode(5);
    root2->left->right = newNode(4);
    root2->right->left = newNode(6);
    root2->right->right = newNode(7);
    if(isSame(root1,root2)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}
