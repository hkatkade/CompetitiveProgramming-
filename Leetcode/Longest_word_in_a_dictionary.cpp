class Solution {
public:
    struct Node{
        Node* arr[26];
        string str;
        Node(){
            for(int i=0;i<26;i++){
                arr[i]=NULL;
            }
            str="";
        }
    };
    Node* root=new Node();
    void insert(string word){
        Node* curr=root;
        for(int i=0;i<word.size();i++){
            if(curr->arr[word[i]-'a']==NULL){
                curr->arr[word[i]-'a']=new Node();
            }
            curr=curr->arr[word[i]-'a'];
        }
        curr->str=word;
        
    }
    string ans="";
    void dfs(Node* curr)
    {
        for(int i=0;i<26;i++){
            if(curr->arr[i]!=NULL&&curr->arr[i]->str!=""){
                if(curr->arr[i]->str.size()>ans.size()){
                    ans=curr->arr[i]->str;
                }
                dfs(curr->arr[i]);
            }
        }
    }
    string longestWord(vector<string>& words) {
        for(string word:words){
            insert(word);
        }
        dfs(root);
        return ans;
        
    }
};
// class TrieNode{
//     public:
//         string s;
//         int len;
//         map<int,TrieNode*> children;
//         TrieNode(){}
// };
// class Solution {
// public:
//     string ans="";
//     int maxLen=0;
//     void dfs(TrieNode *root){
//         if(!root){
//             return;
//         }
//         if(root->len>0 && maxLen<root->len){
//             maxLen=root->len;
//             ans=root->s;
//         }
//         for(auto &i:root->children){
//             dfs(i.second);
//         }
        
//     }
//     void insert(string s,TrieNode *root){
//         TrieNode *curr=root;
//         int n=s.size();
//         int k=1;
//         for(int i=0;i<n;i++){
//             int val=s[i]-'a';
//             if(curr->children.find(val)==curr->children.end()){
//                 curr->children[val]=new TrieNode();   
//                 curr=curr->children[val];
//             }
//             else{
//                 k++;
//                 curr=curr->children[val];
//             }    
//         }
//         curr->s=s;
//         curr->len=k;
//     }
//     string longestWord(vector<string>& words) {
//         TrieNode *root=new TrieNode();
//         for(auto &i:words){
//             insert(i,root);
//         }
//         dfs(root);
//         return ans;
//     }
// };