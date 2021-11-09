class TrieNode{
    public:
        char val;
        unordered_map<char,TrieNode*> children;
        bool isWord=false;
        TrieNode(){}
        TrieNode(char v){
            val=v;
        }
};
class WordDictionary {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr=root;
        for(auto &i:word){
            if(curr->children.find(i)==curr->children.end()){
                curr->children[i]=new TrieNode(i);
            }
            curr=curr->children[i];
        }
        curr->isWord=true;
    }
    bool helper(string word,TrieNode *curr){
        for(int i=0;i<word.size();i++){
            if(word[i]!='.'){
                if(curr->children.find(word[i])==curr->children.end()){
                    return false;
                }
                curr=curr->children[word[i]];
            }
            else{
                for(auto &j:curr->children){
                    if(helper(word.substr(i+1),j.second)){
                        return true;
                    }
                }
                return false;
            }
        }
        return curr->isWord;
    }
    bool search(string word) {
        return helper(word,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */