#include<bits/stdc++.h>
class Solution {
public:
    int getState(string s){
        int state=0;
        for(auto &i:s){
            int index=i-'a';
            state=state | 1<<index;
        }
        return state;
    }
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> state(n,0);
        for(int i=0;i<n;i++){
            state[i]=getState(words[i]);        
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((state[i]&state[j])==0){
                    // cout<<words[i].length()*words[j].length()<<endl;
                    if((words[i].length()*words[j].length())>res){
                        cout<<2<<endl;
                        res=words[i].length()*words[j].length();
                    }    
                }
            }
        }
        return res;
    }
};