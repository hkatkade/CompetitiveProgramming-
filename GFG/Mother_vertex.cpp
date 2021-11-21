class Solution 
{
    public:
    void dfs(vector<int> g[],vector<int> &vis,stack<int> &st,int node,bool flag){
        vis[node]=1;
        for(auto &i:g[node]){
            if(vis[i]==0){
                dfs(g,vis,st,i,flag);
            }
        }
        if(flag)
            st.push(node);
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[]){
	    vector<int> vis(V,0);
	    stack<int> st;
	    for(int i=0;i<V;i++){
	        if(vis[i]==0){
	            dfs(adj,vis,st,i,true);
	        }
	    }
	    vector<int> vis2(V,0);
	    int mv=st.top();
	    dfs(adj,vis2,st,mv,false);
	    for(int i=0;i<V;i++){
	        if(vis2[i]==0){
	            return -1;
	        }
	    }
	    return mv;
	}

};