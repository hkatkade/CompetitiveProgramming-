class TrieNode{
    public:
        TrieNode *left;
        TrieNode *right;
        // TrieNode(){} // doubt
};
class Solution {
public:
    TrieNode *root;
    void insert(int val,TrieNode *root){  
        TrieNode *curr=root;
        for(int i=31;i>=0;i--){
            int bit=(val>>i)&1;
            if(bit==0){
                if(!curr->left){
                    curr->left=new TrieNode();
                }
                curr=curr->left;
            }
            else{
                if(!curr->right){
                    curr->right=new TrieNode();
                }
                curr=curr->right;
            }
        }
    }
        
    int findMaximumXOR(vector<int>& nums) {
        int n=nums.size(),ans=INT_MIN;
        root=new TrieNode();
        for(int i=0;i<n;i++){
            insert(nums[i],root);
        }
        for(int i=0;i<n;i++){
            int val=nums[i];
            TrieNode *curr=root;
            int curr_xor=0;
            for(int j=31;j>=0;j--){
                int bit=(val>>j)&1;
                if(bit==0){
                    if(curr->right){
                        curr_xor+=pow(2,j);
                        curr=curr->right;
                    }
                    else{
                        curr=curr->left;
                    }
                }
                else{
                    if(curr->left){
                        curr_xor+=pow(2,j);
                        curr=curr->left;
                    }
                    else{
                        curr=curr->right;
                    }
                }
                ans=max(ans,curr_xor);
            }
        }
        return ans;
    }
};

// class

class TrieNode{
    public:
        TrieNode *left;
        TrieNode *right;
};
class Trie{
    public:
        TrieNode* root;
        Trie(){ 
            root=new TrieNode();
        }
        void insert(int val,TrieNode *root){  
            TrieNode *curr=root;
            for(int i=31;i>=0;i--){
                int bit=(val>>i)&1;
                if(bit==0){
                    if(!curr->left){
                        curr->left=new TrieNode();
                    }
                    curr=curr->left;
                }
                else{
                    if(!curr->right){
                        curr->right=new TrieNode();
                    }
                    curr=curr->right;
                }
            }
        }
        int find(vector<int>& nums) {
            int n=nums.size(),ans=INT_MIN;
            root=new TrieNode();
            for(int i=0;i<n;i++){
                insert(nums[i],root);
            }
            for(int i=0;i<n;i++){
                int val=nums[i];
                TrieNode *curr=root;
                int curr_xor=0;
                for(int j=31;j>=0;j--){
                    int bit=(val>>j)&1;
                    if(bit==0){
                        if(curr->right){
                            curr_xor+=pow(2,j);
                            curr=curr->right;
                        }
                        else{
                            curr=curr->left;
                        }
                    }
                    else{
                        if(curr->left){
                            curr_xor+=pow(2,j);
                            curr=curr->left;
                        }
                        else{
                            curr=curr->right;
                        }
                    }
                    ans=max(ans,curr_xor);
                }
            }
            return ans;
        }
};


class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie t;
        return t.find(nums);
    }
};