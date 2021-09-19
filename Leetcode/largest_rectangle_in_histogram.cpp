class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size();
        stack<int> st;
        vector<int> left(n,0),right(n,0); 
        for(int i=0;i<n;i++){
            if(st.empty()){
                left[i]=0;
                st.push(i);
            }
            else{
                while(!st.empty() && h[i]<=h[st.top()]){
                    st.pop();
                }
                left[i]=st.empty()?0:st.top()+1;
                st.push(i);
            }
        }
        stack<int> s;
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                right[i]=n-1;
                s.push(i);
            }
            else{
                while(!s.empty() && h[i]<=h[s.top()]){
                    s.pop();
                }
                right[i]=s.empty()?n-1:s.top()-1;
                s.push(i);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,h[i]*(right[i]-left[i]+1));
        }
        // for(auto &i:left){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        // for(auto &i:right){
        //     cout<<i<<" ";
        // }
        cout<<endl;
        return ans;
    }
};