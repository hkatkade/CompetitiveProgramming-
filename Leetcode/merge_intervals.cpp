    class Solution {
    public:
        static bool comp(const vector<int>& vec1, const vector<int>& vec2){
            return vec1[0] < vec2[0];
        }
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            int n=intervals.size();
            stack<vector<int>> st;
            sort(intervals.begin(),intervals.end(),comp);
            st.push(intervals[0]);
            for(int i=1;i<n;i++){
                vector<int> v=st.top();
                if(v[0] <= intervals[i][0] && v[1]>=intervals[i][1]){
                    st.pop();
                    st.push({v[0],v[1]});
                }
                else if(v[1]>=intervals[i][0]){
                    st.pop();
                    st.push({v[0],intervals[i][1]});

                }
                else{
                    st.push(intervals[i]);
                }
            }
            vector<vector<int>> ans;
            while(!st.empty()){
                vector<int> temp=st.top();
                ans.push_back(temp);
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
        }
    };