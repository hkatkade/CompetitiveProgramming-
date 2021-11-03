/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ok=false;
    bool check(TreeNode* root,ListNode* head){
        if(!head){
            return true;
        }
        if(!head || !root){
            return false;
        }
        if(root->val!=head->val){
            return false;
        }
        return check(root->left,head->next) || check(root->right,head->next); 
    }
    void dfs(TreeNode* root,ListNode* head){
        if(!root || ok){
            return;
        }
        if(root->val==head->val){
            ok=check(root,head);
        }
        dfs(root->left,head);
        dfs(root->right,head);
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        dfs(root,head);
        return ok;
    }
};










