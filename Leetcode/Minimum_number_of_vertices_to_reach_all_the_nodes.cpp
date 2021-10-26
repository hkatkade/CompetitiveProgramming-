class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,int> m;
        vector<int> result;
        for(int i=0;i<n;i++){
            m[i]=0;
        }
        
        for(int i=0;i<edges.size();i++){
                m[edges[i][1]]++;
        }
        
        unordered_map<int,int>::iterator itr;
        
        for(itr=m.begin();itr!=m.end();++itr){
            if(itr->second==0){
                result.push_back(itr->first);
            }
        }
        
            
        return result;
    }
};