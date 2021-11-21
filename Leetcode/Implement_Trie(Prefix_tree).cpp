#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char val;
        unordered_map<char,TrieNode*> children;
        bool isWord=false;
        TrieNode(){
            
        }
        TrieNode(char v){
            val=v;
        }
};
class Trie {
public:
    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    void insert(string word) {
        TrieNode* curr=root;
        for(auto &i:word){
            if(curr->children.find(i)==curr->children.end()){
                curr->children[i]=new TrieNode(i);
            }
            curr=curr->children[i];
        }
        curr->isWord=true;
    }
    
    bool search(string word) {
        TrieNode* curr=root;
        for(auto &i:word){
            if(curr->children.find(i)==curr->children.end()){
                return false;
            }
            curr=curr->children[i];
        }
        return curr->isWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr=root;
        for(auto &i:prefix){
            if(curr->children.find(i)==curr->children.end()){
                return false;
            }
            curr=curr->children[i];
        }
        return true;
        
    }
};
