class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>,vector<pair<int,char>>> pq;
        unordered_map<char,int> m;
        for(auto &i:s){
            m[i]++;
        }
        for(auto &i:m){
            pq.push({i.second,i.first});
        }
        string res="";
        pair<int,char> block=pq.top();
        pq.pop();
        res+=block.second;
        block.first--;
        while(!pq.empty()){
            pair<int,char> temp=pq.top();
            pq.pop();
            res+=temp.second;
            temp.first--;
            if(block.first>0){
                pq.push(block);
            }
            block=temp; 
        }
        if(block.first>0){
            return "";
        }
        return res;
    }
};