class Solution {
public:
    int find_set(int a,vector<int>& parent){
        if(parent[a]==a){
            return parent[a];
        }
        return parent[a]=find_set(parent[a],parent);
    }
    void union_sets(vector<int>& parent,vector<int>& sizee,int a,int b){
        a=find_set(a,parent);
        b=find_set(b,parent);
        if(a!=b){
            if(sizee[a]<sizee[b]){
                swap(a,b);
            }
            parent[b]=a;
            sizee[a]+=sizee[b];
        }
    }
    vector<int> findRedundantDirectedConnection(vector<vector<int>>& e) {
        int n=e.size();
        vector<int> parent(n+1,0),sizee(n+1,0),indegree(n+1,-1);
        int bl1=-1,bl2=-1; //1->reason of 2nd indegree
        for(int i=0;i<n;i++){
            int u=e[i][0];
            int v=e[i][1];
            if(indegree[v]==-1){
                indegree[v]=i;
            }
            else{
                bl2=indegree[v]; 
                bl1=i;
                break;
            }
        }
        // if bl1==-1 case 2 : only cycle, else case 1 or case 3
        for(int i=0;i<n;i++){
             parent[i]=i;
             sizee[i]=1;
        }
        for(int i=0;i<n;i++){
            if(bl1==i){
                // here we know that case 1 or case 3 is present else its case 2 if bl1==-1
                continue;
            }
            int u=e[i][0];
            int v=e[i][1];
            int a=find_set(u,parent),b=find_set(v,parent);
            if(a==b){
                if(bl1==-1){
                    return e[i];
                }
                else{
                    return e[bl2];
                }
            }
            else{
                union_sets(parent,sizee,u,v);
            }
            
        }
        return e[bl1];
        
    }
};







