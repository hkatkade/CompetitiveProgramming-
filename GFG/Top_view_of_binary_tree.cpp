#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(!root){
            return ans;
        }
        map<int,int> m;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            Node* curr=q.front().first;
            int h=q.front().second;
            q.pop();
            if(!m[h]){
                m[h]=curr->data;
            }
            if(curr->left){
                q.push({curr->left,h-1});
            }
            if(curr->right){
                q.push({curr->right,h+1});
            }
        }
        for(auto &i:m){
            ans.push_back(i.second);
        }
        return ans;
        //Your code here
    }

};
